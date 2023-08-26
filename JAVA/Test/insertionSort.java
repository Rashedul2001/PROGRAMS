public class insertionSort {
    public static void main(String[] args) {
        // insertion Sort
        int array[] = { 14, 3, 9, 5, 18, 12, 6, 2, 7, 17, 13, 19, 4, 10, 11, 8, 1, 15, 16, 20 };
        for (int i = 1; i < array.length; i++) {
            int current = array[i];// starting with second element
            int j = i - 1;
            while (j >= 0 && current < array[j]) {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = current;
        }
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
    }

}
