import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class Game {
    JFrame frame = new JFrame();
    JLabel label = new JLabel();
    Action upAction = new UpAction();
    Action downAction = new DownAction();
    Action  leftAction = new LeftAction();
    Action rightAction  = new RightAction();
    Game(){
        frame.setTitle("KeyBinding Demo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(700,700);
        frame.setLayout(null);




        label.setBackground(Color.RED);
        label.setBounds(100,100,100,100);
        label.setOpaque(true);
        label.getInputMap().put(KeyStroke.getKeyStroke("UP"),"upKey");
        label.getActionMap().put("upKey",upAction);
        label.getInputMap().put(KeyStroke.getKeyStroke("DOWN"),"downKey");
        label.getActionMap().put("downKey",downAction);
        label.getInputMap().put(KeyStroke.getKeyStroke("LEFT"),"leftKey");
        label.getActionMap().put("leftKey",leftAction);
        label.getInputMap().put(KeyStroke.getKeyStroke("RIGHT"),"rightKey");
        label.getActionMap().put("rightKey",rightAction);
        label.getInputMap().put(KeyStroke.getKeyStroke('w'),"upKey");
        label.getActionMap().put("upKey",upAction);
        label.getInputMap().put(KeyStroke.getKeyStroke('s'),"downKey");
        label.getActionMap().put("downKey",downAction);
        label.getInputMap().put(KeyStroke.getKeyStroke('a'),"leftKey");
        label.getActionMap().put("leftKey",leftAction);
        label.getInputMap().put(KeyStroke.getKeyStroke('d'),"rightKey");
        label.getActionMap().put("rightKey",rightAction);



        frame.add(label);
        frame.setVisible(true);
    }
    public class UpAction extends AbstractAction{

        @Override
        public void actionPerformed(ActionEvent e) {
            label.setLocation(label.getX(),label.getY()-10);

        }
    }
    public class DownAction extends AbstractAction{
        @Override
        public void actionPerformed(ActionEvent e){
            label.setLocation(label.getX(),label.getY()+10);

        }
    }
    public class LeftAction extends AbstractAction{
        @Override
        public void actionPerformed(ActionEvent e){
            label.setLocation(label.getX()-10,label.getY());

        }
    }
    public class RightAction extends AbstractAction{
        @Override
        public void actionPerformed(ActionEvent e){
            label.setLocation(label.getX()+10,label.getY());

        }
    }


}
