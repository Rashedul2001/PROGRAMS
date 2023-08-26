import javax.swing.*;

public class myFrame extends JFrame {
    DragPanel dragPanel = new DragPanel();
    myFrame(){
        setTitle("Drag&Drop");
        setSize(700,700);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        setLayout(null);
        add(dragPanel);




        setVisible(true);
    }
}
