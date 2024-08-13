package com.rashedul.numberguessinggame;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import com.google.android.material.snackbar.Snackbar;

public class MainActivity extends AppCompatActivity {
    RadioButton radioButton2Digit, radioButton3Digit, radioButton4Digit;
    Button buttonStart;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });
        radioButton2Digit = findViewById(R.id.radioButton2Digit);
        radioButton3Digit = findViewById(R.id.radioButton3Digit);
        radioButton4Digit = findViewById(R.id.radioButton4Digit);
        buttonStart = findViewById(R.id.buttonStart);
        Intent intent = new Intent(MainActivity.this, GameActivity.class);

        buttonStart.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                if (radioButton2Digit.isChecked()) {
                    intent.putExtra("digits", 2);

                } else if (radioButton3Digit.isChecked()) {
                    intent.putExtra("digits", 3);

                } else if (radioButton4Digit.isChecked()) {
                    intent.putExtra("digits", 4);
                } else {
                    Snackbar.make(v, "Please select a number of digits", Snackbar.LENGTH_SHORT).show();
                    return;
                }
                startActivity(intent);
                finish();
            }
        });


    }
}