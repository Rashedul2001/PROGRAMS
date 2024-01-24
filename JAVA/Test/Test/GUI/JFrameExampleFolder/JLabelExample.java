package GUI.JFrameExampleFolder;

import javax.swing.JFrame;
import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JLabel;
import javax.swing.border.Border;
import java.awt.Color;
import java.awt.Font;

public class JLabelExample {
    public static void main(String[] args) {

        ImageIcon icon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\JFrameExampleFolder\\R.jpg");
        Border border = BorderFactory.createLineBorder(Color.GREEN, 3, true);

        JLabel label = new JLabel();
        label.setText("This a Example of Label");
        label.setIcon(icon);
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.TOP);
        label.setForeground(new Color(255, 255, 40));
        label.setFont(new Font("Times New Roman", Font.BOLD, 12));
        label.setIconTextGap(0);
        label.setBackground(Color.white);
        label.setOpaque(true);
        label.setBorder(border);
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setBounds(0, 0, 150, 150);// x y axis

        JFrame window = new JFrame();
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setSize(360, 360);
        window.setTitle("RASHEDUL");
        window.setIconImage(icon.getImage());
        window.getContentPane().setBackground(new Color(0x123456));
        // window.pack();//this will set the frame layout as the content in it... have
        // to add all the components then pack
        window.add(label);// adds the label to the frame
        window.setLayout(null);
        window.setVisible(true);

    }

}