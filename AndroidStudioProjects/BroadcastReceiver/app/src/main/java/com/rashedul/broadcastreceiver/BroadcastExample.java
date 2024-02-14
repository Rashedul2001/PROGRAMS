package com.rashedul.broadcastreceiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.widget.Toast;

public class BroadcastExample extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        boolean isPlaneMode = intent.getBooleanExtra("state", false);
        if (isPlaneMode)
            Toast.makeText(context.getApplicationContext(), "Device is in Airplane Mode", Toast.LENGTH_LONG).show();
        else
            Toast.makeText(context.getApplicationContext(), "Airplane Mode is turned OFF", Toast.LENGTH_LONG).show();

    }
}
