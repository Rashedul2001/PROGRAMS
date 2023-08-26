package src;

import java.awt.image.*;

import javax.swing.*;
import java.awt.*;

public class myPanel extends JPanel {
    Image image;
    myPanel(){
        setPreferredSize(new Dimension(500,500));
        image= new ImageIcon("D:\\PROGRAMS\\JAVA\\Graphics\\src\\img.png").getImage();


    }
    public void paint(Graphics g){
        Graphics2D g2d= (Graphics2D) g;
        g2d.setPaint(Color.BLUE);
        g2d.setStroke(new BasicStroke(5));
//        g2d.drawLine(0,0,this.getHeight(),this.getWidth());

//        g2d.drawRect(0,0,200,200);
//        g2d.fillRect(0,0,200,150);

//        g2d.fillOval(10,10,100,100);
//        g2d.drawArc(10,10,100,100,90,280);
//        g2d.setColor(Color.RED);// setPaint and Color are same for the brush
//        g2d.fillArc(10,10,200,200,0,180);
//        g2d.setPaint(Color.CYAN);
//        int[]xCoordinates={150,250,350};
//        int[]yCoordinates= {300,150,300};
//        g2d.drawPolygon(xCoordinates,yCoordinates,3);

//        g2d.setFont(new Font("Ink Free",Font.PLAIN,20));
//        g2d.drawString("I'm learning Graphics",50,50 );
        g2d.drawImage(image,0,0,null);






    }

}
