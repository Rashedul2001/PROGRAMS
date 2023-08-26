import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class myFrame extends JFrame implements KeyListener {
    JLabel boxLabel= new JLabel();
    ImageIcon rocketIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\KeyListener\\Assets\\rocket.png");
    myFrame(){

        boxLabel.setBounds(100,100,50,50);
        boxLabel.setIcon(rocketIcon);

        boxLabel.setBackground(Color.BLACK);
        boxLabel.setOpaque(true);

        this.getContentPane().setBackground(Color.BLACK);
        this.add(boxLabel);
        this.addKeyListener(this);
       this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       this.setSize(600,600);
       this.setLayout(null);
       this.setVisible(true);




    }

    @Override
    public void keyTyped(KeyEvent e) {
        //keyTyped = Invoked when a key is typed . Uses keyChar, Char output
        switch (e.getKeyChar()) {
            case 'a' -> boxLabel.setLocation(boxLabel.getX() - 10, boxLabel.getY());
            case 'w' -> boxLabel.setLocation(boxLabel.getX(), boxLabel.getY() - 10);
            case 'd' -> boxLabel.setLocation(boxLabel.getX() + 10, boxLabel.getY());
            case 's' -> boxLabel.setLocation(boxLabel.getX(), boxLabel.getY() + 10);
        }

    }

    @Override
    public void keyPressed(KeyEvent e) {
        //keyPressed = Invoked when a physical key is pressed down. Uses key code, int output
        switch(e.getKeyCode()){
            case 37-> boxLabel.setLocation(boxLabel.getX()-10,boxLabel.getY());
            case 38 -> boxLabel.setLocation(boxLabel.getX(), boxLabel.getY() - 10);
            case 39 -> boxLabel.setLocation(boxLabel.getX() + 10, boxLabel.getY());
            case 40-> boxLabel.setLocation(boxLabel.getX(), boxLabel.getY() + 10);

        }

    }

    @Override
    public void keyReleased(KeyEvent e) {
    // keyReleased = Invoked whenever a button is released
//        System.out.println("You released key Char: "+e.getKeyChar());
//        System.out.println("You released key Char: "+e.getKeyCode());

    }
}
