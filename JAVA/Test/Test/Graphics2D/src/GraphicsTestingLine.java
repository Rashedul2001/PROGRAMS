package src;

import javax.swing.*;
import java.awt.*;

public class GraphicsTestingLine extends JFrame {
    GraphicsTestingLine() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(600, 600);
        this.setLocationRelativeTo(null);

        // Create a custom panel and add it to the frame
        JPanel panel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);// it makes to perform some panel default action like clearing
                // setting background and other things... before adding the custom painting
                Graphics2D g2d = (Graphics2D) g;
                int panelWidth = getWidth();
                int panelHeight = getHeight();
                g2d.drawLine(0, 0, panelWidth, panelHeight);
            }
        };
        this.add(panel);

        this.setVisible(true);
    }

    public static void main(String[] args) {
        new GraphicsTestingLine();
    }
}
