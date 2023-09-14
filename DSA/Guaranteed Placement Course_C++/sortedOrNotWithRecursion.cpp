#include <iostream>
using namespace std;
bool Sorted(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }
    bool prevArray = Sorted(arr + 1, n - 1);
    return (arr[0] < arr[1]) && prevArray;
}

int main()
{
    int arr[]{1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 5, 4, 6};
    cout << boolalpha;

    cout << Sorted(arr, 5) << endl;
    cout << Sorted(arr2, 5) << endl;
    return 0;
}