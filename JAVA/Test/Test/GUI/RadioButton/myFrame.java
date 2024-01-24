package GUI.RadioButton;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class myFrame extends JFrame implements ActionListener {

    JRadioButton pizzaButton = new JRadioButton("Pizza");
    JRadioButton hamburgerButton = new JRadioButton("HamBurgerButton");
    JRadioButton hotDogButton = new JRadioButton("hotDogButton");

    myFrame() {
        pizzaButton.setFocusable(false);
        pizzaButton.addActionListener(this);
        hamburgerButton.setFocusable(false);
        hamburgerButton.addActionListener(this);
        hotDogButton.setFocusable(false);
        hotDogButton.addActionListener(this);


        ButtonGroup group = new ButtonGroup();
        group.add(pizzaButton);
        group.add(hamburgerButton);
        group.add(hotDogButton);


        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());

        this.add(pizzaButton);
        this.add(hamburgerButton);
        this.add(hotDogButton);


        this.pack();
        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == pizzaButton) {
            System.out.println("You Ordered a Pizza");
        } else if (e.getSource() == hamburgerButton) {
            System.out.println("You Ordered a HamBurger");
        } else if (e.getSource() == hotDogButton) {
            System.out.println("You Ordered a HotDog");
        }
    }


}
