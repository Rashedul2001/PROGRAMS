package com.rashedul.fragmentlifecycle;

import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

public class FragmentExample extends Fragment {
    @Override
    public void onAttach(@NonNull Context context) {
        super.onAttach(context);
        Log.i("Fragment", "onAttach");

    }

    @Override
    public void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.i("Fragment", "onAttach");
    }

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        Log.i("Fragment", "onCreateView");
        return inflater.inflate(R.layout.fragment_new, container, false);
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
        Log.i("Fragment", "onViewCreated");
    }

    @Override
    public void onStart() {
        super.onStart();
        Log.i("Fragment", "onStart");
    }

    @Override
    public void onResume() {
        super.onResume();
        Log.i("Fragment", "onResume");
    }

    @Override
    public void onPause() {
        super.onPause();
        Log.i("Fragment", "onPause");
    }

    @Override
    public void onStop() {
        super.onStop();
        Log.i("Fragment", "onStop");
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        Log.i("Fragment", "onDestroyView");
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        Log.i("Fragment", "onDestroy");
    }

    @Override
    public void onDetach() {
        super.onDetach();
        Log.i("Fragment", "onDetach");
    }
}
