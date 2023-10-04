package GUI.FileChooser.src;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;


public class myFrame extends JFrame implements ActionListener {
    JButton fileChooseButton = new JButton("Select File");
    myFrame(){
        fileChooseButton.addActionListener(this);
        this.add(fileChooseButton);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.setSize(200,200);
        this.setVisible(true);

    }
    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()== fileChooseButton){
            JFileChooser fileChooser = new JFileChooser();
            int response = fileChooser.showOpenDialog(null);
            if (response == JFileChooser.APPROVE_OPTION){
                File choosenFile = new File(fileChooser.getSelectedFile().getAbsolutePath());
               System.out.println(choosenFile.getPath());
            }

        }

    }

}
