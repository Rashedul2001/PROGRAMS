package com.rashedul.sharedpreferences;

import static java.lang.String.format;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText userName, userMessage;
    Button button;
    CheckBox remember;
    int counter = 0;
    boolean isChecked;
    String name, message;
    SharedPreferences sharedPreferences;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        userName = findViewById(R.id.editTextName);
        userMessage = findViewById(R.id.editTextMessage);
        button = findViewById(R.id.button);
        remember = findViewById(R.id.checkBox);


        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                counter++;
                button.setText(String.valueOf(counter));


            }
        });
        retrieveData();

    }

    @Override
    protected void onPause() {
        saveData();
        super.onPause();
    }

    public void saveData() {
        sharedPreferences = getSharedPreferences("saveData", Context.MODE_PRIVATE);
        name = userName.getText().toString();
        message = userMessage.getText().toString();
        isChecked = remember.isChecked();

        SharedPreferences.Editor editor = sharedPreferences.edit();
        editor.putString("key name", name);
        editor.putString("key message", message);
        editor.putInt("key count", counter);
        editor.putBoolean("key remember", isChecked);
        editor.apply();
        Toast.makeText(getApplicationContext(), "Your Data is Saved", Toast.LENGTH_LONG).show();
    }
    void retrieveData()
    {
        sharedPreferences = getSharedPreferences("saveData",Context.MODE_PRIVATE);
        name = sharedPreferences.getString("key name", null);
        message = sharedPreferences.getString("key message", null);
        counter = sharedPreferences.getInt("key count", 0);
        isChecked = sharedPreferences.getBoolean("key remember", false);

        userName.setText(name);
        userMessage.setText(message);
        button.setText(String.valueOf(counter));
        remember.setChecked(isChecked);

    }



}