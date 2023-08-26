import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class myFrame extends JFrame implements ActionListener {
    JMenuBar menuBar = new JMenuBar();

    JMenu fileMenu = new JMenu("File");
    JMenu editMenu = new JMenu("Edit");
    JMenu helpMenu = new JMenu("Help");
    JMenuItem loadItem = new JMenuItem("Load");
    JMenuItem saveItem = new JMenuItem("Save");
    JMenuItem exitItem = new JMenuItem("Exit");
    ImageIcon loadIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MenuBar\\MenuBar\\Assets\\load.png");
    ImageIcon exitIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MenuBar\\MenuBar\\Assets\\exit.png");
    ImageIcon saveIcon = new ImageIcon("D:\\PROGRAMS\\JAVA\\Test\\GUI\\MenuBar\\MenuBar\\Assets\\save.png");

    myFrame() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(600, 600);
        this.setLayout(new FlowLayout());

        loadItem.addActionListener(this);
        loadItem.setIcon(loadIcon);
        loadItem.setMnemonic(KeyEvent.VK_L);// first go the menu

        saveItem.addActionListener(this);
        saveItem.setIcon(saveIcon);
        saveItem.setMnemonic(KeyEvent.VK_S);

        exitItem.addActionListener(this);
        exitItem.setIcon(exitIcon);
        exitItem.setMnemonic(KeyEvent.VK_Q);

        fileMenu.setMnemonic(KeyEvent.VK_F);// Alt + F
        fileMenu.add(loadItem);
        fileMenu.add(saveItem);
        fileMenu.add(exitItem);

        editMenu.setMnemonic(KeyEvent.VK_E);// Alt + E
        helpMenu.setMnemonic(KeyEvent.VK_H);// Alt + H

        menuBar.add(fileMenu);
        menuBar.add(editMenu);
        menuBar.add(helpMenu);

        this.setJMenuBar(menuBar);
        this.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == loadItem) {
            System.out.println("Loading File");
        }
        if (e.getSource() == saveItem) {
            System.out.println("Saving the file");
        }
        if (e.getSource() == exitItem) {
            System.exit(0);
        }

    }
}
