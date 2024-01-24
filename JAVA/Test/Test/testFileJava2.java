import javax.swing.*;
import java.awt.*;

public class testFileJava2 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("TextField Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JTextField textField = new JTextField("Enter your name");
        textField.setColumns(20);

        frame.add(textField);
        frame.setSize(300, 100);
        frame.setVisible(true);
    }
}
