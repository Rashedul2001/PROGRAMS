package com.rashedul.learning;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.material.snackbar.Snackbar;

public class MainActivity extends AppCompatActivity {
    Spinner spinnerCountry;
    TextView textCountry;
    ArrayAdapter adapter;
    Button toast, snackBar;
    LinearLayout linLayout;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        spinnerCountry = findViewById(R.id.spinnerCountrys);
        textCountry = findViewById(R.id.textViewCountryName);
        toast = findViewById(R.id.buttonToast);
        snackBar = findViewById(R.id.buttonSnackBar);
        linLayout = findViewById(R.id.linearLayoutTop);


        adapter = ArrayAdapter.createFromResource(this, R.array.country, android.R.layout.simple_spinner_dropdown_item);
        spinnerCountry.setAdapter(adapter);
        spinnerCountry.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
                textCountry.setText(parent.getItemAtPosition(position).toString());

            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {

            }
        });
        // toast button click listener
        toast.setOnClickListener(v -> Toast.makeText(getApplicationContext(), "This is a Toast Message", Toast.LENGTH_LONG).show());
        snackBar.setOnClickListener(v -> Snackbar.make(linLayout, "This is a SnackBar Message", Snackbar.LENGTH_LONG).setAction("Close", new View.OnClickListener() {
            @Override
            public void onClick(View v) {

            }
        }).show());


    }
}