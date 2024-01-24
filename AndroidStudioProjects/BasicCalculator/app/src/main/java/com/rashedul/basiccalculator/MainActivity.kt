package com.rashedul.basiccalculator

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView

class MainActivity : AppCompatActivity() {

    //variable to hold operands and type of calculation
    private lateinit var result: EditText
    private lateinit var display: EditText
    private val displayOperation by lazy(LazyThreadSafetyMode.NONE) { findViewById<TextView>(R.id.operation) }
    private var operand1: Double? = null
    private var operand2: Double? = 0.0
    private var pendingOperation = "="
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        result = findViewById(R.id.Result)
        display = findViewById(R.id.Display)

        //data input variables
        val button0: Button = findViewById(R.id.button0)
        val button1: Button = findViewById(R.id.button1)
        val button2: Button = findViewById(R.id.button2)
        val button3: Button = findViewById(R.id.button3)
        val button4: Button = findViewById(R.id.button4)
        val button5: Button = findViewById(R.id.button5)
        val button6: Button = findViewById(R.id.button6)
        val button7: Button = findViewById(R.id.button7)
        val button8: Button = findViewById(R.id.button8)
        val button9: Button = findViewById(R.id.button9)
        val buttonDot: Button = findViewById(R.id.buttonDot)

        //operation variable
        val buttonPlus: Button = findViewById<Button>(R.id.buttonPlus)
        val buttonMinus: Button = findViewById<Button>(R.id.buttonMinus)
        val buttonMultiply: Button = findViewById<Button>(R.id.buttonMultiply)
        val buttonDivide= findViewById<Button>(R.id.buttonDivide)
        val buttonEqual = findViewById<Button>(R.id.buttonEqual)

        val listener = View.OnClickListener {   v->
            val b = v as Button
            display.append(b.text)

        }





    }
}