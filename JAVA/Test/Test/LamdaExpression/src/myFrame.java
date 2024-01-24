import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class myFrame extends JFrame {
    JButton button1 = new JButton("Button 1");
    myFrame(){
        button1.setBounds(100,100,100,50);
        button1.addActionListener((e)->{System.out.println("You clicked the Button1");});



       this.add(button1);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setLayout(null);
        this.setVisible(true);


    }
}
