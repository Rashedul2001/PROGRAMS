import java.util.InputMismatchException;
import java.util.Scanner;

public class exception {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        try// we can use another syntax also, which was suggested by IntelliJ
        {
            System.out.print("Enter a Integer number to divide:");
            int x=scan.nextInt();
            System.out.print("Enter a Integer number to divide that:");
            int y= scan.nextInt();
            System.out.println("The result is: "+ (x/y));


        }
        catch(ArithmeticException e){
            System.out.println("You can't divide by zero. You \"IDIOT\" ");
        }
        catch(InputMismatchException e)
        {
            System.out.println("Enter a number \"IDIOT\"");
        }
        catch(Exception e){
            System.out.println("Something went wrong");

        }
        finally{
            scan.close();

        }
    }
}
