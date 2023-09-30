#include <iostream>
#include <cstring>

using namespace std;
void quickSort(int *arr, int n)
{
    int maxElement{INT_MIN};
    for (int i = 0; i < n; i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    int *count = new int[maxElement + 1];
    memset(count, 0, sizeof(int) * (maxElement + 1));

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxElement; i++)
    {
        count[i] += count[i - 1];
    }
    int *output = new int[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
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
    quickSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}