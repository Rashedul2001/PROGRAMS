package com.rashedul.intentexample;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

public class SecondActivity extends AppCompatActivity {
    TextView showName;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        showName = findViewById(R.id.showName);
        Intent intent = getIntent();
        String name = intent.getStringExtra("showName");
        showName.setText(name);
    }
}