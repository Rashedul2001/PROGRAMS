import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionAdapter;

public class DragPanel extends JPanel {
    ImageIcon smileIcon= new ImageIcon("smile.png");
//    final int WIDTH = smileIcon.getIconWidth();
//    final int HEIGHT = smileIcon.getIconHeight();
    Point imageCorner =  new Point();
    Point prevPoint = new Point();

    DragPanel(){
//        setBounds(0,0,WIDTH,HEIGHT);// the image is set to be free in the frame so frame must be the size of the frame
//        this.setBackground(Color.DARK_GRAY);// for other your twig it later
//        this.setOpaque(true);

        imageCorner.setLocation(0,0);
        ClickListener clickListener = new ClickListener();
        DragListener dragListener =  new DragListener();
        this.addMouseListener(clickListener);
        this.addMouseMotionListener(dragListener);


    }
    public void paintComponent(Graphics g){
        super.paintComponent(g);
        smileIcon.paintIcon(this,g,(int)imageCorner.getX(),(int)imageCorner.getY());

    }
    private class ClickListener extends MouseAdapter {
        public void mousePressed(MouseEvent e){
           prevPoint =e.getPoint();

        }


    }
   private class DragListener extends MouseMotionAdapter{
        public void mouseDragged(MouseEvent e){
           Point currentPoint= e.getPoint();
           imageCorner.translate((int)(currentPoint.getX()-prevPoint.getX()), (int)(currentPoint.getY()- prevPoint.getY()));
           prevPoint= currentPoint;
           repaint();

        }

   }




}
