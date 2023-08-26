package GUI.Layout;

import javax.swing.*;
import javax.swing.plaf.ColorUIResource;
import java.awt.*;

public class Flow {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setLayout(new FlowLayout(FlowLayout.LEADING, 10, 10));// button flowing process style appearing style, and horizontal and vertical gap between button

        UIManager.put("Button.focus", new ColorUIResource(new Color(0, 0, 0, 0)));// prevent appearing focus rectangle

        JPanel panel = new JPanel();
        panel.setPreferredSize(new Dimension(250, 250));
        panel.setLayout(new FlowLayout());
        panel.setBackground(Color.MAGENTA);
        panel.setOpaque(true);

        panel.add(new JButton("1"));
        panel.add(new JButton("2"));
        panel.add(new JButton("3"));
        panel.add(new JButton("4"));
        panel.add(new JButton("5"));
        panel.add(new JButton("6"));
        panel.add(new JButton("7"));
        panel.add(new JButton("8"));
        panel.add(new JButton("9"));


//        JButton button1 = new JButton(); // this line is double comment
        // frame.add(new JButton("1"));
        // frame.add(new JButton("2"));
        // frame.add(new JButton("3"));
        // frame.add(new JButton("4"));
        // frame.add(new JButton("5"));
        // frame.add(new JButton("6"));
        // frame.add(new JButton("7"));
        // frame.add(new JButton("8"));
        // frame.add(new JButton("9"));
        // frame.add(panel);


        frame.add(panel);
        frame.setVisible(true);

    }
}
