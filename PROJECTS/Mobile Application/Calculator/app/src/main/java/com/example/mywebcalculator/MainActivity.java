package com.example.mywebcalculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.webkit.WebView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        WebView refCal=(WebView) findViewById(R.id.Calculate);
        refCal.getSettings().setJavaScriptEnabled(true);
        refCal.loadUrl("file:///android_asset/index.html");


    }

}