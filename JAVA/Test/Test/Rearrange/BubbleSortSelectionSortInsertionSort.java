package Rearrange;
// import java.util.*;

public class BubbleSortSelectionSortInsertionSort {
    public static void print(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array = { 14, 3, 9, 5, 18, 12, 6, 2, 7, 17, 13, 19, 4, 10, 11, 8, 1, 15, 16, 20 };

        // {
        // //* Bubble Sort
        // // time complexity O(n^2)
        // for (int i = 0; i < array.length - 1; i++) {
        // for (int j = 0; j < array.length - i - 1; j++) {
        // if (array[j] > array[j + 1]) {
        // int temp = array[j];
        // array[j] = array[j + 1];
        // array[j + 1] = temp;
        // }

        // }
        // }
        // print(array);
        // }

        // {
        // //* selection sort
        // // time complexity O(n^2)
        // for (int i = 0; i < array.length - 1; i++) {
        // int smallest = i;
        // for (int j = i + 1; j < array.length ; j++) {
        // if (array[smallest] > array[j]) {
        // smallest = j;
        // }
        // }
        // int temp = array[smallest];
        // array[smallest] = array[i];
        // array[i] = temp;
        // }
        // print(array);

        // }

        {
            // * insertion Sort
            // time complexity O(n^2)
            for (int i = 1; i < array.length; i++) {
                int key = array[i];
                int j = i - 1;
                while (j >= 0 && array[j] > key) {
                    array[j + 1] = array[j];
                    j--;
                }
                array[j + 1] = key;
            }
            print(array);

        }

    }
}