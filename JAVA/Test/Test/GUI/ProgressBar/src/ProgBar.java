package GUI.ProgressBar.src;

import javax.swing.*;
import java.awt.*;


public class ProgBar {
    JFrame frame = new JFrame("ProgressBar");
    JProgressBar bar = new JProgressBar(0, 100);

    ProgBar() {
        bar.setValue(0);
        bar.setBounds(50, 100, 300, 50);
        bar.setStringPainted(true);
        bar.setFont(new Font("MV Boli", Font.BOLD, 20));
        bar.setForeground(new Color(0x6FFF87));

        frame.add(bar);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);
        frame.setLayout(null);
        frame.setVisible(true);
        System.out.println("Testing");
        fillBar();


    }

    public void fillBar() {
        int counter = 1;
        while (counter <= 100) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            bar.setValue(counter);
            counter += 1;
        }
        bar.setString("Done! :)");

    }

}
