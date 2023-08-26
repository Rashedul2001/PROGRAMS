//* this code will find the unique number among all pairs of numbers.

#include <iostream>
using namespace std;
int findUnique(int arr[], int n)
{
    int ans{};
    for (int i{}; i < n; i++)
    {
        ans = arr[i] ^ ans;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 5};

    cout << findUnique(arr, 7);

    return 0;
}
