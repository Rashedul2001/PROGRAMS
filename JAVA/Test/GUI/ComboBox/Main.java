package GUI.ComboBox;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JComboBox;

public class Main {
    public static void main(String[] args) {

        String[] Jobs = {"Engineer", "Teacher", "Doctor"};
        JComboBox<String> comboBox = new JComboBox<>(Jobs);
        // there are also many other method which we can use like
        // the insertItemAt, addItem, removeItem and many more

        ActionListener listener = new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println(comboBox.getSelectedItem());

            }
        };

        comboBox.addActionListener(listener);

        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        frame.add(comboBox);


        frame.pack();
        frame.setVisible(true);


    }


}
