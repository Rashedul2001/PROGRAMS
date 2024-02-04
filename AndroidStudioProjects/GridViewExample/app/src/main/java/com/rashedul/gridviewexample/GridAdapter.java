package com.rashedul.gridviewexample;

import android.annotation.SuppressLint;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.ArrayList;

public class GridAdapter extends BaseAdapter {

    Context context;
    ArrayList<String> names = new ArrayList<>();
    ArrayList<Integer> images = new ArrayList<>();

    public GridAdapter(Context context, ArrayList<String> names, ArrayList<Integer> images) {
        this.context = context;
        this.names = names;
        this.images = images;
    }


    @Override
    public int getCount() {
        return names.size();
    }

    @Override
    public Object getItem(int position) {
        return null;
    }

    @Override
    public long getItemId(int position) {
        return 0;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        @SuppressLint("ViewHolder") View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.gridview_layout, parent, false);
        ImageView imageView = view.findViewById(R.id.imageViewGrid);
        TextView textView = view.findViewById(R.id.textViewGrid);

        textView.setText(names.get(position));
        imageView.setImageResource(images.get(position));


        return view;
    }
}
