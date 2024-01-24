package GUI.TextField;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class myFrame extends JFrame implements ActionListener {

    JButton subButton = new JButton("Submit");
    JTextField textField = new JTextField();

    myFrame() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());

        textField.setPreferredSize(new Dimension(250, 50));
        textField.setFont(new Font("Cascadia Mono", Font.ITALIC, 15));
        textField.setForeground(new Color(20, 139, 230));
        textField.setBackground(Color.DARK_GRAY);

        subButton.setFocusable(false);
        subButton.addActionListener(this);


        this.add(textField);
        this.add(subButton);
        this.pack(); // create a frame exactly sized as the size needed to pack  all the component that has been added to the frame
        this.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == subButton) {
            System.out.println(textField.getText());
        }

    }

}
