#include <iostream>
void bubbleSort(int array[], int n)
{
    for (int i{1}; i < n; i++)
        for (int j{0}; j < n - i; j++)
            if (array[j] > array[j + 1])
                std::swap(array[j], array[j + 1]);
}

int main()
{
    std::cout << "Enter number of Elements: ";
    int n;
    std::cin >> n;
    int array[n];
    std::cout << "Enter Random integer numbers: ";
    for (int i = 0; i < n; i++)
        std::cin >> array[i];

    bubbleSort(array, n);
    std::cout << "After using bubble sort the Array: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << array[i] << (i == n - 1 ? "\n" : " ");

    return 0;
}
