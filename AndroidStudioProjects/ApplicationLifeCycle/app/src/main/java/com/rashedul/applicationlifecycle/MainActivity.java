package com.rashedul.applicationlifecycle;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    TextView textViewNum;
    Button buttonAdd, buttonGoto;
    int counter = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textViewNum = findViewById(R.id.textViewNumber);
        buttonAdd = findViewById(R.id.buttonAdd);
        buttonGoto = findViewById(R.id.buttonGoto);

        buttonAdd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                counter++;
                textViewNum.setText(String.valueOf(counter));

            }
        });
        buttonGoto.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent secondActivity = new Intent(getApplicationContext(), SecondActivity.class);
                startActivity(secondActivity);
            }
        });


        Log.d("Message", "MainActivity onCreate");


    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d("Message","MainActivity onDestroy");

    }
    @Override
    protected void onPause(){
        super.onPause();
        Log.d("Message","MainActivity onPause");

    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d("Message","MainActivity onStop");

    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.d("Message","MainActivity onResume");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d("Message","MainActivity onRestart");


    }
}