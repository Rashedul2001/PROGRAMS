public class TestFileJava {

    // User-defined function without parameters and return value
    public static void greet() {
        System.out.println("Hello, World!");
    }

    // User-defined function with parameters and return value
    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        // Calling the greet function
        greet();

        // Calling the add function and storing the result in a variable
        int sum = add(5, 3);
        System.out.println("Sum is: " + sum);
    }
}
