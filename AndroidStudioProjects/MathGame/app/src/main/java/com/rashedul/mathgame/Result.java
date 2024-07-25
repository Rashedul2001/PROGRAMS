package com.rashedul.mathgame;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class Result extends AppCompatActivity {
    Button goMainPage, playAgain;
    TextView result;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_result);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });
        goMainPage = findViewById(R.id.buttonGoMain);
        playAgain = findViewById(R.id.buttonPlayAgain);
        result = findViewById(R.id.textViewResult);

        result.setText("Your Score is " + String.valueOf(getIntent().getIntExtra("score", 0)));
        goMainPage.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //this will go back to the main activity(main activity was never closed)
                finish();

            }

        });

        playAgain.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent game = new Intent(Result.this, Game.class);
                startActivity(game);
                finish();
            }
        });


    }

}