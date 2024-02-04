package com.rashedul.recyclerviewexample;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private ArrayList<String> countryNameList = new ArrayList<>();
    private ArrayList<String> detailList = new ArrayList<>();
    private ArrayList<Integer> imageList = new ArrayList<>();
    private RecyclerViewAdapter adapter;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(MainActivity.this));

        countryNameList.add("Bangladesh");
        countryNameList.add("Germany");
        countryNameList.add("Spain");

        detailList.add("This is the Flag of Bangladesh");
        detailList.add("This is the Flag of Germany");
        detailList.add("This is the Flag of Spain");

        imageList.add(R.drawable.bangladeshflag);
        imageList.add(R.drawable.germanyflag);
        imageList.add(R.drawable.spainflag);

        adapter = new RecyclerViewAdapter(countryNameList, detailList, imageList, MainActivity.this);
        recyclerView.setAdapter(adapter);


    }
}