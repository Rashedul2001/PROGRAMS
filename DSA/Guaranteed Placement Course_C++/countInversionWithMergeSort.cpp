// Problem Statement:
// Count The Inversion of the given Array
// Two Elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

// Brute Force:

/* #include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int inversion = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                inversion++;
            }
        }
    }
    std::cout << inversion << std::endl;

    return 0;
} */
// Time Complexity O(n^2)

// Now the refined one with merge Sort..
#include <iostream>
#include <vector>

long long countInversionMerge(std::vector<int> &array, int start, int mid, int end)
{
    long long int inversion = 0;
    int firstLen = mid - start + 1;
    int secondLen = end - mid;
    std::vector<int> firstArray(firstLen);
    std::vector<int> secondArray(secondLen);
    for (int i = 0; i < firstLen; i++)
    {
        firstArray[i] = array[i + start];
    }
    for (int i = 0; i < secondLen; i++)
    {
        secondArray[i] = array[i + mid + 1];
    }
    int firstIndex = 0, secondIndex = 0;
    int mergeIndex = start;

    while (firstIndex < firstLen && secondIndex < secondLen)
    {
        if (firstArray[firstIndex] <= secondArray[secondIndex])
        {
            array[mergeIndex] = firstArray[firstIndex];
            firstIndex++;
            mergeIndex++;
        }
        else
        {
            array[mergeIndex] = secondArray[secondIndex];
            secondIndex++;
            mergeIndex++;
            inversion += (firstLen - firstIndex);
        }
    }
    while (firstIndex < firstLen)
    {
        array[mergeIndex] = firstArray[firstIndex];
        firstIndex++;
        mergeIndex++;
    }
    while (secondIndex < secondLen)
    {
        array[mergeIndex] = secondArray[secondIndex];
        secondIndex++;
        mergeIndex++;
    }
    return inversion;
}

long long countInversionMergeSort(std::vector<int> &array, int start, int end)
{
    long long int inversion = 0;
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        inversion += countInversionMergeSort(array, start, mid);
        inversion += countInversionMergeSort(array, mid+1, end);
        inversion += countInversionMerge(array, start, mid, end);
    }

    return inversion;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> array(n);
    for (int i = 0; i < n; i++)

    {
        std::cin >> array[i];
    }
    std::cout << countInversionMergeSort(array, 0, n - 1);

    return 0;
}
