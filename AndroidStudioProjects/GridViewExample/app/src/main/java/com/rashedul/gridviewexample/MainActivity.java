package com.rashedul.gridviewexample;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.GridView;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    GridView gridView;
    ArrayList<String> names = new ArrayList<>();
    ArrayList<Integer> images = new ArrayList<>();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        gridView = findViewById(R.id.gridView);
        filArray();

        GridAdapter adapter = new GridAdapter(this, names, images);
        gridView.setAdapter(adapter);
        gridView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Toast.makeText(getApplicationContext(), "You Clicked on " + names.get(position), Toast.LENGTH_SHORT).show();
            }
        });


    }

    public void filArray() {
        names.add("CAT");
        names.add("FOX");
        names.add("HEDGEHOG");
        names.add("MECAW");
        names.add("OWL");
        names.add("PEACOCK");
        names.add("SQUIRREL");
        names.add("TIGER");
        names.add("ZEBRA");

        images.add(R.drawable.cat);
        images.add(R.drawable.fox);
        images.add(R.drawable.hedgehog);
        images.add(R.drawable.macaw);
        images.add(R.drawable.owl);
        images.add(R.drawable.peacock);
        images.add(R.drawable.squirrel);
        images.add(R.drawable.tiger);
        images.add(R.drawable.zebra);


    }
}