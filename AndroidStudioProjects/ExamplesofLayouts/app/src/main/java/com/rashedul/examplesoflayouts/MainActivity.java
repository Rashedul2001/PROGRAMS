package com.rashedul.examplesoflayouts;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    Button magicButton;
    Button shapeChange;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView text1=findViewById(R.id.text1);

        text1.setOnClickListener(v -> {
            text1.setTextColor(Color.BLUE);// this will overwrite the xml
            text1.setBackgroundColor(Color.MAGENTA);
            String changedStr = "This Text has been Changed";
            text1.setText(changedStr);

        });
        shapeChange= findViewById(R.id.buttonShape);
        magicButton = findViewById(R.id.magic);
        magicButton.setOnClickListener(v->{
            shapeChange.setBackgroundResource(R.drawable.oval_button_shape);

        });



    }
}