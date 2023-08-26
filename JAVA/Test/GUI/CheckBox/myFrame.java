package GUI.CheckBox;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class myFrame extends JFrame implements ActionListener {
    JCheckBox checkBox = new JCheckBox();// this creates a checkBox where it was added in flow layout
    // lager we convert selected checkBox to an icon and unselected checkBox to an icon
    JButton button = new JButton();
    ImageIcon xIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\CheckBox\\x.png");
    ImageIcon checkIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\CheckBox\\check.png");


    myFrame() {

        checkBox.setText("Gained knowledge");
        checkBox.setFocusable(false);
        checkBox.setFont(new Font("Viga", Font.PLAIN, 15));
        checkBox.setIcon(xIcon);
        checkBox.setSelectedIcon(checkIcon);

        button.setText("Submit");
        button.setFocusable(false);
        button.addActionListener(this);


        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(checkBox);
        this.add(button);


        this.pack(); // create a frame exactly sized as the size needed to pack  all the component that has been added to the frame
        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            System.out.println(checkBox.isSelected());
        }


    }
}
