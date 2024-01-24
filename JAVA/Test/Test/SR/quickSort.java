package SR;

public class quickSort {
    public static int partition(int[] arr, int start, int end) {
        int pivot = arr[end];
        int i = start - 1;
        ;
        for (int j = start; j < end; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        return i;
    }

    public static void QuickSort(int[] arr, int start, int end) {
        if (start < end) {
            int pivot = partition(arr, start, end);
            QuickSort(arr, start, pivot - 1);
            QuickSort(arr, pivot + 1, end);
        }
    }

    public static void main(String[] args) {

        int[] arr = { 2, 1, 5, 6, 4, 3 };
        int n = arr.length;
        QuickSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}
