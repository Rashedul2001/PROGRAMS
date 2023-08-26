import javax.swing.*;
import java.awt.*;

public class myFrame extends JFrame {
    myPanel panel =new myPanel();
    myFrame(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        add(panel);
        pack();
        setLocationRelativeTo(null);
        setResizable(false);










        setVisible(true);

    }
}
