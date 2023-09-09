#include <iostream>
using namespace std;
void merge(int *arr, int start, int mid, int end)
{

    const int firstLen = (mid - start) + 1;
    const int secondLen = (end - mid);
    int *firstArr = new int[firstLen];
    int *secondArr = new int[secondLen];

    for (int i = 0; i < firstLen; i++)
    {
        firstArr[i] = arr[start + i];
    }
    for (int i = 0; i < secondLen; i++)
    {
        secondArr[i] = arr[mid + 1 + i];
    }
    int firstIndex = 0, secondIndex = 0;
    int mergeIndex = start; // we used start because it is the main array passed by pointer or reference
    // we can't use 0 because it passed fully in recursive call but with different start and end value

    while (firstIndex < firstLen && secondIndex < secondLen)
    {
        if (firstArr[firstIndex] <= secondArr[secondIndex])
        {
            arr[mergeIndex] = firstArr[firstIndex];
            firstIndex++;
            mergeIndex++;
        }
        else
        {
            arr[mergeIndex] = secondArr[secondIndex];
            secondIndex++;
            mergeIndex++;
        }
    }
    while (firstIndex < firstLen)
    {
        arr[mergeIndex] = firstArr[firstIndex];
        firstIndex++;
        mergeIndex++;
    }
    while (secondIndex < secondLen)
    {
        arr[mergeIndex] = secondArr[secondIndex];
        secondIndex++;
        mergeIndex++;
    }
    delete[] firstArr, secondArr;
    return;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "given array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, n - 1);

    cout << endl;
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}