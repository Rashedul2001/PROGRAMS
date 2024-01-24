package com.rashedul.buttonclick

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.PersistableBundle
import android.util.Log
import android.view.View
import android.widget.Button
import android.widget.EditText

private const val TAG = "mainActivity"
private const val KEYtoSaveUserState = "TextContent"

class MainActivity : AppCompatActivity() {
    private var userInput: EditText? = null
    private var button: Button? = null
    private var multiLineText: EditText? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Log.d(TAG, "onCreate is Called")
        setContentView(R.layout.activity_main)
        userInput = findViewById<EditText>(R.id.userInput)
        button = findViewById<Button>(R.id.button)
        multiLineText = findViewById<EditText>(R.id.multilineText)
        button?.setOnClickListener(object : View.OnClickListener {
            override fun onClick(v: View?) {
                Log.d(TAG, "onClick is Called")
                if (userInput?.text.toString() != "") {
                    multiLineText?.append(userInput?.text)
                    multiLineText?.append("\n")
                    userInput?.setText("")
                }
            }
        })


    }

    override fun onStart() {
        Log.d(TAG, "onStart is Called")
        super.onStart()
    }

    override fun onRestoreInstanceState(savedInstanceState: Bundle) {
        Log.d(TAG, "onRestoreInstanceState is Called")
        super.onRestoreInstanceState(savedInstanceState)
        multiLineText?.setText(savedInstanceState.getString(KEYtoSaveUserState, ""))

    }

    override fun onResume() {
        Log.d(TAG, "onResume is Called")
        super.onResume()
    }

    override fun onStop() {
        Log.d(TAG, "onStop is Called")
        super.onStop()
    }

    override fun onPause() {
        Log.d(TAG, "onPause is Called")
        super.onPause()
    }

    override fun onRestart() {
        Log.d(TAG, "onRestart is Called")
        super.onRestart()
    }


    override fun onDestroy() {
        Log.d(TAG, "onDestroy is Called")
        super.onDestroy()
    }

    override fun onSaveInstanceState(outState: Bundle) {
        Log.d(TAG, "onSaveInstanceState is Called")
        super.onSaveInstanceState(outState)
        outState.putString(KEYtoSaveUserState, multiLineText?.text.toString())

    }
}

