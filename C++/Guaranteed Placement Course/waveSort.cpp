#include <iostream>
void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            std::swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            std::swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    waveSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }

    return 0;
}
