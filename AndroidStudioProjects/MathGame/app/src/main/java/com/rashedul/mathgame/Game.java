package com.rashedul.mathgame;

import android.content.Intent;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.Locale;
import java.util.Random;

public class Game extends AppCompatActivity {
    private static final long START_TIMER_MILLIS = 60000;
    TextView score, life, time, questionField;
    EditText answerField;
    Button submit, next;
    Random rand = new Random();
    int number1, number2, userAnswer, correctAnswer, userScore = 0, userLife = 3;
    CountDownTimer timer;
    boolean timer_running = false, submitted = false;
    long timeLeftMillis = START_TIMER_MILLIS;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_game);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.gameLayout), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        score = findViewById(R.id.textViewScore);
        life = findViewById(R.id.textViewLife);
        time = findViewById(R.id.textViewTime);
        questionField = findViewById(R.id.textViewQuestion);
        answerField = findViewById(R.id.editTextAnswer);
        submit = findViewById(R.id.buttonSubmit);
        next = findViewById(R.id.buttonNext);
        // createGame needs to be here because the elements it needs are should be defined first
        createGame();

        submit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String ansStr = answerField.getText().toString();

                if (!ansStr.isEmpty() && ansStr.length() <= 4) {
                    submitted = true;
                    userAnswer = Integer.parseInt(ansStr);
                    next.setText("NEXT");
                    resetTimer();
                    if (userAnswer == correctAnswer) {
                        questionField.setText("Correct Answer\n+10 Points");
                        userScore += 10;
                        score.setText("" + userScore);

                    } else {
                        questionField.setText("Wrong Answer\n -1 Life");
                        userLife -= 1;
                        life.setText("" + userLife);
                    }
                }

            }
        });


        next.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                resetTimer();
                if (userLife == 0) {
                    Toast.makeText(getApplicationContext(), "Game Over", Toast.LENGTH_LONG).show();
                    Intent resultIntent = new Intent(Game.this, Result.class);
                    resultIntent.putExtra("score", userScore);
                    startActivity(resultIntent);
                    finish();
                }
                if (userAnswer != correctAnswer && !submitted) {
                    userScore -= 5;
                    score.setText("" + userScore);
                }
                submitted = false;
                createGame();
            }
        });

    }

    public void createGame() {
        number1 = rand.nextInt(100);
        number2 = rand.nextInt(100);
        correctAnswer = number1 + number2;
        questionField.setText(String.valueOf(number1) + " + " + String.valueOf(number2));
        next.setText("PASS(-5pt)");
        answerField.setText("");
        startTimer();
    }

    public void startTimer() {
        timer = new CountDownTimer(timeLeftMillis, 1000) {
            @Override
            public void onTick(long millisUntilFinished) {
                timeLeftMillis = millisUntilFinished;
                updateText();

            }

            @Override
            public void onFinish() {
                timer_running = false;
                resetTimer();
                updateText();
                questionField.setText("Time's Up\n-1 Life ");
                userLife -= 1;
                life.setText("" + userLife);
                submitted = true;
                next.setText("NEXT");


            }
        }.start();
        timer_running = true;
    }

    public void updateText() {
        int second = (int) (timeLeftMillis / 1000);
        String timeLeft = String.format(Locale.getDefault(), "%2d", second);
        time.setText(timeLeft);


    }

    public void resetTimer() {
        timeLeftMillis = START_TIMER_MILLIS;
        timer.cancel();
        updateText();

    }


}