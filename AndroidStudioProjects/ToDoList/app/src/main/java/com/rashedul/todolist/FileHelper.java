package com.rashedul.todolist;

import android.content.Context;

import java.io.FileOutputStream;
import java.util.ArrayList;

public class FileHelper {
    public static String fileName = "listInfo.dat";

    public static void writeData(ArrayList<String> item, Context context)
    {
        FileOutputStream fos = context.openFileOutput(fileName,Context.MODE_PRIVATE);
        
    }
}
