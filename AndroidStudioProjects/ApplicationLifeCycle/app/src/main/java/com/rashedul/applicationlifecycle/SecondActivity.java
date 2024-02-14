package com.rashedul.applicationlifecycle;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

public class SecondActivity extends AppCompatActivity {
    Button goBackButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        goBackButton = findViewById(R.id.buttonBack);
        goBackButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent mainActivity = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(mainActivity);
            }
        });

        Log.d("Message", "Second Activity onCreate");


    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d("Message", "SecondActivity onDestroy");

    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.d("Message", "SecondActivity onPause");

    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d("Message", "SecondActivity onStop");

    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.d("Message", "SecondActivity onResume");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d("Message", "SecondActivity onRestart");


    }


}