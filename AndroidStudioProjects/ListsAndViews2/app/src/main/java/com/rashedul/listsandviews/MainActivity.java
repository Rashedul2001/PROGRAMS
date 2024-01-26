package com.rashedul.listsandviews;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

import java.sql.Array;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ListView listViewCountryNames = findViewById(R.id.listViewCountry);
        String[] countryNames = getResources().getStringArray(R.array.countryNames);
        ArrayAdapter<String> adapterCountry = new ArrayAdapter<String>(getApplicationContext(), android.R.layout.simple_list_item_1, countryNames);
        listViewCountryNames.setAdapter(adapterCountry);
        listViewCountryNames.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                String selectedCountry = parent.getItemAtPosition(position).toString();
                Toast.makeText(getApplicationContext(), "You Selected " + selectedCountry, Toast.LENGTH_LONG).show();

            }
        });


    }
}