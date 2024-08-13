package com.rashedul.numberguessinggame;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.ArrayList;
import java.util.Random;

public class GameActivity extends AppCompatActivity {
    TextView textViewLast, textViewHint, textViewRemaining;
    Button buttonSubmit;
    EditText editTextUserGuess;
    int digits;
    Random rand = new Random();
    int randomNumber;
    int remainingGuesses = 10;
    ArrayList<Integer> list = new ArrayList<>();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_game);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        textViewHint = findViewById(R.id.textViewHint);
        textViewLast = findViewById(R.id.textViewLast);
        textViewRemaining = findViewById(R.id.textViewRemaining);
        editTextUserGuess = findViewById(R.id.editTextUserGuess);
        buttonSubmit = findViewById(R.id.buttonSubmit);

        digits = getIntent().getIntExtra("digits", 2);

        if (2 == digits) {
            randomNumber = rand.nextInt(90) + 10;
        } else if (3 == digits) {
            randomNumber = rand.nextInt(900) + 100;
        } else {
            randomNumber = rand.nextInt(9000) + 1000;
        }

        textViewHint.setText(String.format("My Secret Numbers Digit is %d", digits));

        buttonSubmit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                final String guess = editTextUserGuess.getText().toString();
                if (guess.isEmpty()) {
                    Toast.makeText(GameActivity.this, "Please Guess a Number", Toast.LENGTH_SHORT).show();
                } else {
                    textViewLast.setVisibility(View.VISIBLE);
                    textViewRemaining.setVisibility(View.VISIBLE);

                    int userGuess = Integer.parseInt(guess);
                    remainingGuesses--;
                    list.add(userGuess);


                    if (randomNumber == userGuess) {
                        AlertDialog.Builder builder = new AlertDialog.Builder(GameActivity.this);
                        builder.setTitle("Number Guessing Game");
                        builder.setCancelable(false);
                        builder.setMessage(String.format("Congratulations!!\nYou guessed my number in %d attempts.\n" + "My Number was %d. And Your Guesses were\n", 10 - remainingGuesses, randomNumber) + list + "\n\n Do you want to Play again? ");

                        builder.setPositiveButton("YES", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                startActivity(new Intent(GameActivity.this, MainActivity.class));
                                finish();
                            }
                        });
                        builder.setNegativeButton("NO", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                moveTaskToBack(true);
                                android.os.Process.killProcess(android.os.Process.myPid());
                                System.exit(1);
                            }
                        });
                        builder.create().show();

                    } else if (randomNumber > userGuess) {
                        textViewHint.setText("Hint: Increase Your Number");
                    } else {
                        textViewHint.setText("Hint: Decrease Your Number");
                    }
                    if (0 == remainingGuesses) {
                        AlertDialog.Builder builder = new AlertDialog.Builder(GameActivity.this);
                        builder.setTitle("Number Guessing Game");
                        builder.setCancelable(false);
                        builder.setMessage(String.format("Sorry!!\nThe Game is Over\n" + "You couldn't guess my Secret Number\n My Secret Number was : %d \n\n Do you want to Play again? ", randomNumber));
                        builder.setPositiveButton("YES", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                startActivity(new Intent(GameActivity.this, MainActivity.class));
                                finish();
                            }
                        });
                        builder.setNegativeButton("NO", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                moveTaskToBack(true);
                                android.os.Process.killProcess(android.os.Process.myPid());
                                System.exit(1);
                            }
                        });
                        builder.create().show();
                    }

                    textViewRemaining.setText(String.format("Remaining Guesses: %d", remainingGuesses));
                    textViewLast.setText(String.format("Your Last Guess was: %d", userGuess));
                    editTextUserGuess.setText("");

                }


            }
        });


    }
}