import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import java.awt.*;

public class SliderDemo implements ChangeListener {
    JFrame frame;
    JPanel panel = new JPanel();
    JLabel label = new JLabel();
    JSlider slider = new JSlider(0,100,50);
    SliderDemo(){
        frame = new JFrame("Slider");

        panel.setLayout(new BoxLayout(panel,BoxLayout.Y_AXIS));
        panel.setBorder(BorderFactory.createEmptyBorder(10,10,50,10));

        slider.setPreferredSize(new Dimension(300,300));
        slider.setPaintTicks(true);
        slider.setMinorTickSpacing(5);
        slider.setMajorTickSpacing(25);
        slider.setPaintLabels(true);
//        slider.setPaintTrack(false);//default is true set the track
        slider.setFont(new Font("MV Boli",Font.PLAIN,14));

        slider.setOrientation(SwingConstants.VERTICAL);
        slider.addChangeListener(this);

        label.setText(slider.getValue()+" °C");

        panel.add(slider);
        panel.add(label);
        frame.add(panel);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,600);




        frame.setVisible(true);




    }

    @Override
    public void stateChanged(ChangeEvent e) {
        label.setText(slider.getValue()+" °C");

    }
}
