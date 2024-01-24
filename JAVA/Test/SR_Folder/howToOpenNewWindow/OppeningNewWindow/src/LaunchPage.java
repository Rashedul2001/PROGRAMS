import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class LaunchPage implements ActionListener {
    JButton button1 =new JButton();
    JFrame frame = new JFrame();


    LaunchPage(){

        button1.setText("New Window");
        button1.setFocusable(false);
        button1.setBounds(200,100,150,60);
        button1.addActionListener(this);



        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(600,600);
        frame.setLayout(null);
        frame.add(button1);
        frame.setVisible(true);


    }

    @Override
    public void actionPerformed(ActionEvent e) {
       if(e.getSource()==button1)
       {
           frame.dispose();
           NewWindow window = new NewWindow();


       }

    }
}
