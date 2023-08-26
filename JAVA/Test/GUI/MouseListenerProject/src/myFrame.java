import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class myFrame extends JFrame implements MouseListener {
JLabel label1;
ImageIcon smileImage= new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MouseListenerProject\\lib\\smile.png");
ImageIcon dizzyImage= new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MouseListenerProject\\lib\\dizzy.png");
ImageIcon nervousImage= new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MouseListenerProject\\lib\\nervous.png");
ImageIcon hurtImage = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MouseListenerProject\\lib\\hurt.png");

    myFrame(){
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setSize(700,700);

       label1= new JLabel();
//       label1.setBackground(Color.CYAN);
//       label1.setOpaque(true);
       label1.setBounds(50,50,200,200);
       label1.setIcon(smileImage);
       label1.addMouseListener(this);




       this.add(label1);
        this.setVisible(true);
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        //Invoked when a mouse button has been clicked(pressed and released on a component
//        System.out.println("You clicked the mouse.");
        label1.setIcon(dizzyImage);

    }

    @Override
    public void mousePressed(MouseEvent e) {
        //Invoked when a mouse button has been pressed on a component
//        System.out.println("You Pressed the mouse.");
        label1.setIcon(hurtImage);



    }

    @Override
    public void mouseReleased(MouseEvent e) {
        //Invoked when a mouse button has been released on a component
//        System.out.println("You released the mouse.");

    }

    @Override
    public void mouseEntered(MouseEvent e) {
        //Invoked when a mouse enters a component
//        System.out.println("You Entered the component");
//        label1.setBackground(Color.RED);
        label1.setIcon(nervousImage);

    }

    @Override
    public void mouseExited(MouseEvent e) {
        //Invoked when a mouse exits a component
//        System.out.println("You Exited the component");
//        label1.setBackground(Color.CYAN);
        label1.setIcon(smileImage);

    }


}
