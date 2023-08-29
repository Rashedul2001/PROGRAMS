import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class ListFiles {
    public static void main(String[] args) {
        File folder = new File("D:/ProgramsTools/Apps/VSCodeInstaller/Extensions");
        File[] files = folder.listFiles();
        try {
            FileWriter writer = new FileWriter("D:/PersonalFiles/PROGRAMS/JAVA/Test/list.txt");
            for (File file : files) {
                writer.write(file.getName() + "\n");
            }
            writer.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
