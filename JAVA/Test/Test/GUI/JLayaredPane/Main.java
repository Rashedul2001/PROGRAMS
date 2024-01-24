package GUI.JLayaredPane;

import javax.swing.*;
import java.awt.*;

public class Main {
    public static void main(String... args) {
        JFrame frame = new JFrame();


        JLabel label1 = new JLabel();
        label1.setBackground(Color.GREEN);
        label1.setOpaque(true);
        label1.setBounds(0, 0, 200, 200);

        JLabel label2 = new JLabel();
        label2.setBackground(Color.MAGENTA);
        label2.setOpaque(true);
        label2.setBounds(100, 100, 200, 200);

        JLabel label3 = new JLabel();
        label3.setBackground(Color.CYAN);
        label3.setOpaque(true);
        label3.setBounds(200, 200, 200, 200);

        JLabel label4 = new JLabel();
        label4.setBackground(Color.RED);
        label4.setOpaque(true);
        label4.setBounds(300, 300, 200, 200);
        JLabel label5 = new JLabel();
        label5.setBackground(Color.BLUE);
        label5.setOpaque(true);
        label5.setBounds(400, 400, 200, 200);
        JLabel label6 = new JLabel();
        label6.setBackground(Color.BLACK);
        label6.setOpaque(true);
        label6.setBounds(500, 500, 200, 200);

        JLayeredPane layeredPane = new JLayeredPane();
        layeredPane.setBounds(0, 0, 500, 500);
        layeredPane.add(label1);
        layeredPane.add(label2, JLayeredPane.DRAG_LAYER);
        layeredPane.add(label3, JLayeredPane.DEFAULT_LAYER);
        layeredPane.add(label4, Integer.valueOf(4));
        layeredPane.add(label5);
        layeredPane.add(label6);


        frame.add(layeredPane);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setVisible(true);


    }
}
