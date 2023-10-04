package GUI.JFrameExampleFolder;

import javax.swing.JFrame;
import javax.swing.ImageIcon;
import java.awt.Color;

public class JFrameExample {
    public static void main(String[] args) {
        JFrame window = new JFrame();
        window.setSize(800, 600);
        window.setTitle("RASHEDUL");
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // window.setResizable(false);
        window.setVisible(true);// it is recommended to use the visibility after setting the properties of the
                                // JFrame
        ImageIcon image = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\JFrameExampleFolder\\R.jpg");
        window.setIconImage(image.getImage());
        // window.getContentPane().setBackground(Color.CYAN);
        window.getContentPane().setBackground(new Color(0x123456));// also rgb is available
        // MyFrame frame = new MyFrame();// this is an example how we can create and use
        // a subclass of JFrame class
        // this is just o show we can use a pre-written class to use in our program like
        // a header file in c++
        // frame.setTitle("%RASHEDUL%");

    }
}
