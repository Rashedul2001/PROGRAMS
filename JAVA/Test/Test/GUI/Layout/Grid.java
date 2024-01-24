package GUI.Layout;

import javax.swing.*;
import java.awt.*;


public class Grid {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setLayout(new GridLayout(3, 3, 10, 10));// number of rows and column..... and horizontal spacing and vertical spacing


        // we are adding this type of button to save time ... here we cannot use the button as an object
        // the preferred way is
//        JButton button1 = new JButton();
//        button1.setText("2");


        frame.add(new JButton("1"));
        frame.add(new JButton("2"));
        frame.add(new JButton("3"));
        frame.add(new JButton("4"));
        frame.add(new JButton("5"));
        frame.add(new JButton("6"));
        frame.add(new JButton("7"));
        frame.add(new JButton("8"));
        frame.add(new JButton("9"));


        frame.setVisible(true);

    }
}
