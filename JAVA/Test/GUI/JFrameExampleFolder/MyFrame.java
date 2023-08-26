package GUI.JFrameExampleFolder;

import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame {
    MyFrame() {
        this.setSize(800, 600);
        this.setTitle("Rashedul");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // this.setResizable(false);
        this.setVisible(true);// it is recommended to use the visibility after setting the properties of the
                              // JFrame
        ImageIcon image = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\JFrameExampleFolder\\R.jpg");
        this.setIconImage(image.getImage());
        // this.getContentPane().setBackground(Color.CYAN);
        this.getContentPane().setBackground(new Color(0x123456));// also rgb is available
    }

}
