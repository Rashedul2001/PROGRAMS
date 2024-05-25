#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int partition(std::vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(std::vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    const int SIZE = 10000;
    std::vector<int> arr(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10000;
    }

    std::vector<int> arrCopy = arr;

    auto start = std::chrono::high_resolution_clock::now();
    bubbleSort(arr);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> bubbleSortDuration = end - start;

    start = std::chrono::high_resolution_clock::now();
    quickSort(arrCopy, 0, SIZE - 1);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> quickSortDuration = end - start;

    std::cout << "Bubble Sort duration: " << bubbleSortDuration.count() << " seconds" << std::endl;
    std::cout << "Quick Sort duration: " << quickSortDuration.count() << " seconds" << std::endl;

    return 0;
}
