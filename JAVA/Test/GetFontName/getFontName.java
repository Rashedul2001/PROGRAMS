package GetFontName;

import java.awt.*;
import java.util.Random;


public class getFontName {
    public static void main(String[] args) {
        // Get the local graphics environment
        Random random = new Random();

        GraphicsEnvironment ge = GraphicsEnvironment.getLocalGraphicsEnvironment();


        // Retrieve the available font family names
        String[] fontNames = ge.getAvailableFontFamilyNames();

        int count = 0;
        // Print the font names
        for (String fontName : fontNames) {
            System.out.println(fontName);
            count++;
        }
        int ranNumber = random.nextInt(count);
        System.out.println("\n\nTodays pick is " + fontNames[ranNumber]);


    }

}
