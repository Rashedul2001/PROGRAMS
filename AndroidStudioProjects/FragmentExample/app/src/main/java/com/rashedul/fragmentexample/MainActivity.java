package com.rashedul.fragmentexample;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;

public class MainActivity extends AppCompatActivity {

    Button buttonReplace;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });


        FragmentManager fragmentManager = getSupportFragmentManager();
        FragmentTransaction fragmentTransaction = fragmentManager.beginTransaction();

        FirstFragment firstFragment = new FirstFragment();
        fragmentTransaction.add(R.id.mainFrame, firstFragment);
        fragmentTransaction.commit();
        buttonReplace = findViewById(R.id.buttonReplace);
        FragmentManager fragmentManager1 = getSupportFragmentManager();
        buttonReplace.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (fragmentManager1.findFragmentByTag("secondFragment") == null) {
                    FragmentTransaction fragmentTransaction1 = fragmentManager1.beginTransaction();
                    SecondFragment secondFragment = new SecondFragment();
                    fragmentTransaction1.replace(R.id.mainFrame, secondFragment, "secondFragment");

                    fragmentTransaction1.addToBackStack(null);

                    fragmentTransaction1.commit();

                }


            }
        });


    }
}