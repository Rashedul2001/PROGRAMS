package GUI.colorChooser.src;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class myFrame extends JFrame implements ActionListener {
    JButton colorChooserButton = new JButton("Pick a Color");
    JLabel label1 = new JLabel();

    myFrame() {
        colorChooserButton.addActionListener(this);
        colorChooserButton.setFocusable(false);


        label1.setBackground(Color.WHITE);
        label1.setOpaque(true);
        label1.setText("This is some Text");
        label1.setFont(new Font("MV Boli", Font.ITALIC, 50));

        this.add(colorChooserButton);
        this.add(label1);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.pack();
        this.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource()==colorChooserButton){
            JColorChooser colorChooser = new JColorChooser();
            Color choosenColor= JColorChooser.showDialog( null,"Pick a Color",null);
            label1.setForeground(choosenColor);
        }

    }

}
