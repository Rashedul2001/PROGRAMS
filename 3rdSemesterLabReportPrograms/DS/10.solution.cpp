#include <iostream>
#include <vector>

int partition(std::vector<int> &array, int start, int end)
{
    int pivot = array[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            std::swap(array[i], array[j]);
        }
    }
    i++;
    std::swap(array[i], array[end]);

    return i;
}
void quickSort(std::vector<int> &array, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(array, start, end);
        quickSort(array, start, pivot - 1);
        quickSort(array, pivot + 1, end);
    }
}

int main()
{

    std::cout << "Enter number of Elements: ";
    int n;
    std::cin >> n;
    std::vector<int> array(n);
    std::cout << "Enter Random integer numbers: ";
    for (int i = 0; i < n; i++)
        std::cin >> array[i];
    quickSort(array, 0, n - 1);
    std::cout << "After Sorting The Array is: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << array[i] << (i == n - 1 ? '\n' : ' ');

    return 0;
}