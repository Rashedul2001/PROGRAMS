package Rearrange;
import java.util.ArrayList;

public class array {
    public static void main(String... args)
    {
        // List of int numbers
        ArrayList<Integer> array = new ArrayList<>();
        for(int i=0;i<10;i++)
        {
            array.add(10);

        }
        for(int i=0;i<10;i++) {
            System.out.print((array.get(i) )+ " " );
        }
        System.out.println();
        ArrayList<String> names=new ArrayList<>();
        names.add("Ferrari");
        names.add("Kawasaki");
        names.add("Rolls Royce");
        for(int i=0;i<3;i++) {
            System.out.println(names.get(i));
        }
        /* there are also .set(index, value)
          .remove(index)
          .clear() and many more
         */











    }
}
