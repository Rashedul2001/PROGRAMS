#include <iostream>
using namespace std;

int main(void)
{

    int *arr = nullptr, size{};
    cout << "Please Enter the array Size and The array Elements Respectively:" << endl;
    cin >> size;
    arr = new int[size];
    for (int i{}; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sort:";
    for (int i = 0; i < size; i++)
    {
        cout << ' ' << arr[i];
    }
    cout << "\nAfter short:";

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    delete arr;
    return 0;
}