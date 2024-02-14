package com.rashedul.fragmentlifecycle;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

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