package GUI.RadioButton;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RadioButtonWithSubmit {
    public static void main(String[] args) {

        JRadioButton button1 = new JRadioButton("Engineer");
        JRadioButton button2 = new JRadioButton("Teacher");
        JRadioButton button3 = new JRadioButton("Doctor");

        ButtonGroup group1 = new ButtonGroup();
        group1.add(button1);
        group1.add(button2);
        group1.add(button3);

        JButton radioSubmit = new JButton("Submit");
        radioSubmit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (button1.isSelected()) {
                    System.out.println("Wow you want to become an " + button1.getText() + " Best of Luck");
                } else if (button2.isSelected())
                    System.out.println("Wow you want to become a " + button2.getText() + " Best of Luck");
                else if (button3.isSelected())
                    System.out.println("Wow you want to become a " + button3.getText() + " Best of Luck");
                else
                    System.out.println("Nothing is selected");
            }
        });


        JFrame frame = new JFrame();
        frame.setLayout(new FlowLayout()); //if not added for frame all the component stack upon each other
        frame.setTitle("Select you Dream");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(button1);
        frame.add(button2);
        frame.add(button3);
        frame.add(radioSubmit);


        frame.pack();// this make the size of the frame as much as the content it has in it
        frame.setVisible(true);


    }
}