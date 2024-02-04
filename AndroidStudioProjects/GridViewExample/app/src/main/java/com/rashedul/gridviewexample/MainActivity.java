package com.rashedul.gridviewexample;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.GridView;

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



    }
    public void filArray(){
        names.add("cat");
        names.add("fox");
        names.add("hedgehog");
        names.add("macaw");
        names.add("owl");
        names.add("peacock");
        names.add("squirrel");
        names.add("tiger");
        names.add("zebra");

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