package Rearrange;
import java.util.Scanner;

public class inputOutput{
    public static void main(String... args)
    { Scanner scan = new Scanner(System.in);
        System.out.print("Enter Your Name: ");
        String name = scan.nextLine();
        System.out.print("Hi, "+name+"\nHow old are you?");
        int age= scan.nextInt();
        if(age<=17)
            System.out.println("Have Fun with your life");
        else if( age<60)
            System.out.println("Work Hard to establish Your life.");
        else
            System.out.println("Have Fun with Your Family.");
        System.out.print("What is your Future plan?");
        scan.nextLine();
        String plan=scan.nextLine();
        System.out.println("The plan is "+plan+" \nGoodLuck");








    }
}