package com.rashedul.recyclerviewexample;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.cardview.widget.CardView;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class RecyclerViewAdapter extends RecyclerView.Adapter<RecyclerViewAdapter.countryViewHolder> {
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

    @NonNull
    @Override
    public countryViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.card_view, parent, false);
        return new countryViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull countryViewHolder holder, int position) {
        holder.textViewCountryNames.setText(countryNameList.get(position));
        holder.textViewDetails.setText(detailList.get(position));
        holder.imageViewCountry.setImageResource(imageList.get(position));
        holder.cardView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(context, "You Clicked on " + holder.textViewCountryNames.getText().toString() + "'s Flag", Toast.LENGTH_SHORT).show();

            }
        });

    }


    @Override
    public int getItemCount() {
        return countryNameList.size();
    }

    class countryViewHolder extends RecyclerView.ViewHolder {
        private TextView textViewCountryNames, textViewDetails;
        private ImageView imageViewCountry;
        private CardView cardView;


        public countryViewHolder(@NonNull View itemView) {
            super(itemView);
            textViewCountryNames = itemView.findViewById(R.id.textViewCountryName);
            textViewDetails = itemView.findViewById(R.id.textViewDetails);
            imageViewCountry = itemView.findViewById(R.id.imageViewCountry);
            cardView = itemView.findViewById(R.id.cardView);


        }
    }


}
