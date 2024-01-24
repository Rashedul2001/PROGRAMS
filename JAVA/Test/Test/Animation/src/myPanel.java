import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class myPanel extends JPanel implements ActionListener {
    final int PANEL_WIDTH = 700;
    final int PANEL_HEIGHT = 600;
    Image monster;
    Image background;
    Timer timer;
    int xVelocity= 5;
    int yVelocity = 5;
    int x =200,y=50;


    myPanel(){
        this.setPreferredSize(new Dimension(PANEL_WIDTH,PANEL_HEIGHT));
        this.setBackground(Color.BLACK);
        monster = new ImageIcon("assets/monster.png").getImage();
        background = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\Animation\\assets\\background.jpg").getImage();
        timer = new Timer(100,this);
        timer.start();


        
    }
    public void paint(Graphics g){
        super.paint(g);
        Graphics2D g2d= (Graphics2D)g;
        g2d.drawImage(background,0,0,null);
        g2d.drawImage(monster,x,y,null);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(x>=PANEL_WIDTH-monster.getWidth(null)||x<0)
        {
            xVelocity*=-1;

        }
        x=x+xVelocity;
        if(y>=PANEL_HEIGHT-monster.getHeight(null)||y<0)
        {
            yVelocity*=-1;


        }
        y=y+yVelocity;
        repaint();

    }
}
