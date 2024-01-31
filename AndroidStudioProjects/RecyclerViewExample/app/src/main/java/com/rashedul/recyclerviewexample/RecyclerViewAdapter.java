package com.rashedul.recyclerviewexample;

import android.content.Context;
import android.view.View;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class RecyclerViewAdapter {
    private ArrayList<String> countryNameList;
    private ArrayList<String> detailList;
    private ArrayList<Integer> imageList;
    private Context context;

    public RecyclerViewAdapter(ArrayList<String> countryNameList, ArrayList<String> detailList, ArrayList<Integer> imageList, Context context) {
        this.countryNameList = countryNameList;
        this.detailList = detailList;
        this.imageList = imageList;
        this.context = context;
    }
    class countryViewHolder extends RecyclerView.ViewHolder{
        private TextView textViewCountryNames,textViewDetails;
        private ImageView imageViewCountry;


        public countryViewHolder(@NonNull View itemView) {
            super(itemView);

        }
    }






}
