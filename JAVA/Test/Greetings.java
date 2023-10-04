import java.util.*; // import all Classes in the Package 

public class Greetings {
    public static void main(String[] args) {
        System.out.println("What is your Name:");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Enter Your Age:");
        int age = sc.nextInt();
        System.out.println("Hello, " + name + ". Wow your " + age + " Years Old.");
        sc.close();
    }

}
