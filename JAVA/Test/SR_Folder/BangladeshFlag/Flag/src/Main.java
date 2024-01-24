import javax.swing.*;
import java.awt.*;

public class Main {
    public static void main(String[] args) {

        ImageIcon icon =new ImageIcon("D:\\PROGRAMS\\JAVA\\SR_Folder\\BangladeshFlag\\Flag\\src\\Flag.png");


        JPanel poll = new JPanel();
        poll.setBackground(Color.darkGray);
        poll.setOpaque(true);
        poll.setBounds(90, 50, 10, 750);

        JPanel green = new JPanel();
        green.setBackground(Color.GREEN);
        green.setOpaque(true);
        green.setBounds(100, 50, 10 * 30, 6 * 30);

        JPanel red = new JPanel(){
            @Override
            protected void paintComponent(Graphics g){
                g.setColor(Color.RED);
                g.fillOval(0,0,getWidth(),getHeight());


            }
        };
        red.setBounds((90 + 75), 50 + 30, 4 * 30, 4 * 30);

       JPanel ground =new JPanel(){
           @Override
           protected void paintComponent(Graphics g){
               g.setColor(Color.GRAY);
               g.fillRect(0,0,getWidth(),getHeight());

           }

       };
       ground.setOpaque(true);
       ground.setBounds(0,800,1920,1000);



        JFrame frame = new JFrame("Bangladesh Flag");
        frame.getContentPane().setBackground(Color.CYAN);
        frame.setSize(1000,1000);
        frame.setIconImage(icon.getImage());
        frame.add(poll);
        frame.add(red);
        frame.add(green);
        frame.add(ground);
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);


    }
}