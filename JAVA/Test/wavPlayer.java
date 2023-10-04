import java.util.Scanner;
import java.io.File;
import java.io.IOException;
import javax.sound.sampled.*;


public class wavPlayer {
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        Scanner scan = new Scanner(System.in);
        File file = new File("D:\\PROGRAMS\\JAVA\\Test\\playable_01.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);

        String response="";
        while(!response.equals("Q"))
        {
            System.out.println("P = play    S = stop    R = reset    Q = quit");
            System.out.print("Enter your Choice:");
            response = scan.next();
            response = response.toUpperCase();
            switch(response) {
                case ("P"):
                    clip.start();
                    break;
                case ("S"):clip.stop();
                     break;
                case ("R"): clip.setMicrosecondPosition(0);
                    break;
                case ("Q"):{
                    clip.stop();
                    clip.close();
                break;}
                default:
                    System.out.println("NOT a valid response.");
                    break;
            }
        }
        System.out.println("See you later.");
    }
}
