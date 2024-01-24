package GUI.JFrameExampleFolder;

import javax.swing.*;
import java.awt.*;

public class JPanelExample {
    public static void main(String[] args) {
        JLabel label = new JLabel();
        label.setText("make Flag");
        label.setHorizontalAlignment(JLabel.CENTER);

        JLabel label2 = new JLabel();
        label2.setText("Bangladesh");
        label2.setBounds(0, 0, 100, 100);

        JPanel redPanel = new JPanel();
        redPanel.setBackground(Color.red);
        redPanel.setBounds(0, 0, 250, 250);
        redPanel.setLayout(null);
        redPanel.add(label2);

        JPanel greenPanel = new JPanel();
        greenPanel.setBackground(Color.green);
        greenPanel.setBounds(250, 250, 250, 250);
        greenPanel.setLayout(new BorderLayout());// this is for layout ,, setHorizontalAlignment
        greenPanel.add(label);
        // if we set layout to null then we can set Bounds to set x and y cordinates

        JPanel bluePanel = new JPanel();
        bluePanel.setBackground(new Color(0x123456));
        bluePanel.setBounds(500, 0, 10, 1000);

        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(700, 500);
        frame.setLayout(null);
        // if setLayout is not null the layout will not manage automatically although size
        // is set of other components
        frame.add(redPanel);
        frame.add(greenPanel);
        frame.add(bluePanel);
        frame.setVisible(true);
    }

}
