import javax.swing.*;
import java.awt.*;

public class TestFileJava extends JTextField {
    private String hint;

    public TestFileJava(String hint) {
        this.hint = hint;
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Display the hint text when the field is empty
        if (getText().isEmpty()) {
            Graphics2D g2 = (Graphics2D) g.create();
            g2.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
            g2.setColor(Color.GRAY);
            g2.setFont(getFont().deriveFont(Font.ITALIC));
            g2.drawString(hint, getInsets().left, g2.getFontMetrics().getAscent() + getInsets().top);
            g2.dispose();
        }
    }
}


