import java.io.*;


public class fileExample {
    public static void main(String[] args)
    {
        File newFile = new File("D:\\PROGRAMS\\JAVA\\Test\\checkFile.txt");
        if(newFile.exists()) {
            System.out.println("This file exists");
//            System.out.println(newFile.getPath());
            System.out.println(newFile.getAbsolutePath());
//             newFile.delete();


        }
        else{
            System.out.println("This file doesn't exists");

        }
        try {
            FileWriter writer = new FileWriter("Song.txt");// the project folder if JAVA not test
            writer.write("Amake amar moto thakte daw \nami nijeke nijer moto guchiye niyechi");
            writer.append("\n this is a awesome song");
            writer.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
        try{
            FileReader reader = new FileReader("D:\\PROGRAMS\\JAVA\\Test\\Art.txt");
            int data= reader.read();
            while(data!=-1){
                System.out.print((char)data);
                data=reader.read();

            }
            reader.close();


        }
        catch (FileNotFoundException e) {
            e.printStackTrace();

        } catch (IOException e) {
            throw new RuntimeException(e);

        }


    }
}
