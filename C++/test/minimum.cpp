#include <iostream>
using namespace std;

int min(int arr[10])
{
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main(void)
{
    int arr[10];
    cout << "Enter 10 integers:";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Minimum Number is: " << min(arr) << endl;
    return 0;
}