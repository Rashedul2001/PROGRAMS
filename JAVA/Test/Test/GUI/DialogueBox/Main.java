package GUI.DialogueBox;

import javax.swing.*;

public class Main {
    public static void main(String[] args) {
//        JOptionPane.showMessageDialog(null, "this is the message area.", "Message", JOptionPane.PLAIN_MESSAGE);
//        JOptionPane.showMessageDialog(null, "this is the message area.", "Message", JOptionPane.INFORMATION_MESSAGE);
//        JOptionPane.showMessageDialog(null, "this is the message area.", "Message", JOptionPane.QUESTION_MESSAGE);
//        JOptionPane.showMessageDialog(null, "this is the message area.", "Message", JOptionPane.WARNING_MESSAGE);
//        JOptionPane.showMessageDialog(null, "this is the message area.", "Message", JOptionPane.ERROR_MESSAGE);

//        JOptionPane.showConfirmDialog(null, "Are you Enjoying thi?", "Select", JOptionPane.YES_NO_CANCEL_OPTION);// this return as user input we can use that data


//        String name = JOptionPane.showInputDialog("What is your name?");
//        System.out.println(name);

        String[] responce = {"YES", "NO DOUBT", "think?"};
        ImageIcon icon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\DialogueBox\\img.png");
        JOptionPane.showOptionDialog(null, "Are You Having Fun?", "Sakalaka Boom Boom", JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane.INFORMATION_MESSAGE, icon, responce, 0);


    }


}
