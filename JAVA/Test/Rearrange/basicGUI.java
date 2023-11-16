package Rearrange;

import javax.swing.JOptionPane;

public class basicGUI {

    public static void main(String... args)
    {
        String name=JOptionPane.showInputDialog("Enter your Name:");
        JOptionPane.showMessageDialog(null, "Hello "+name);
        int age= Integer.parseInt(JOptionPane.showInputDialog("Enter your Age:"));
        JOptionPane.showMessageDialog(null,"Wow you are :"+age+" Years old");
        double height=Double.parseDouble(JOptionPane.showInputDialog("Enter your Height:"));
        JOptionPane.showMessageDialog(null,"Your Height is "+height+"feet");

    }

}