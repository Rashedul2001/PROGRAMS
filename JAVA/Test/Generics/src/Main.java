public class Main {
    public static void main(String[] args) {

        Integer[] intArray = {0,1, 2, 3, 4, 5, 6};
        Double[] doubleArray = {0.3, 3.5, 6.6, 8.9};
        Character[] charArray = {'a', 'b', 'c', 'd'};
        String[] stringArray = {"Hello", "Hello", "How", "Are you"};

        show(intArray);


    }

    public static void show(Integer[] array) {
        for (int a : array)
            System.out.print(a + " ");

    }
}
