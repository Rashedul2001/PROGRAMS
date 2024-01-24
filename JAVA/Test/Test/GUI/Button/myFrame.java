package GUI.Button;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class myFrame extends JFrame implements ActionListener {
    JButton button;
    ImageIcon buttonIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\Button\\img.png");// we could set the path to just img.png if it was a project not a folder with many others folder
    ImageIcon wowIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\Button\\wow.png");
    static int count=1;
    JLabel label = new JLabel();


    myFrame() {

        button = new JButton();
        button.setBounds(50,100,150,60);
        button.addActionListener(this);
        button.setText("Click me");
        button.setIcon(buttonIcon);
        button.setFocusable(false);
        button.setVerticalTextPosition(JButton.BOTTOM);
        button.setHorizontalTextPosition(JButton.CENTER);
        button.setFont(new Font("AIRBORNE",Font.BOLD,25));
        button.setForeground(new Color(100,200,200));
        button.setBackground(Color.CYAN);
        button.setBorder(BorderFactory.createRaisedBevelBorder());

        label.setIcon(wowIcon);
        label.setBounds(200,200,200,200);
        label.setBackground(Color.blue);
        label.setOpaque(true);
        label.setText("This a label");
        label.setVisible(false);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setSize(500, 500);
        this.add(button);
        this.setVisible(true);
        this.add(label);

    }
    @Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==button){
            System.out.println("Button Clicked "+count+" Times");
            count++;
//            make the size of the label bigger each time when clicking the button
//            button.setEnabled(false);// set it for disabling the button after one click
            label.setVisible(true);
            Image originalImage= wowIcon.getImage();
            int newWidth= wowIcon.getIconWidth()-10,newHeight= wowIcon.getIconHeight()-10;
            Image scanledImage= originalImage.getScaledInstance(newWidth,newHeight,Image.SCALE_SMOOTH);
            wowIcon = new ImageIcon(scanledImage);
            label.setIcon(wowIcon);

//            Image originalImage= wowIcon.getImage();
//            int newWidth = wowIcon.getIconWidth() + 10; // Increase width by 10
//            int newHeight = wowIcon.getIconHeight() + 10; // Increase height by 10
//            Image scaledImage = originalImage.getScaledInstance(newWidth, newHeight, Image.SCALE_SMOOTH);
//            ImageIcon resizedIcon = new ImageIcon(scaledImage);
//            label.setIcon(resizedIcon);


        }

    }


}
