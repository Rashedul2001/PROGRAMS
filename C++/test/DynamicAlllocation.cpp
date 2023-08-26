#include <iostream>

using namespace std;

int main()
{
    float *ptr = nullptr;

    for (size_t i = 0; i < 10000000000000; i++)
        try
        {
            ptr = new float[10000000000000]; // this is an array of floating numbers
        }
        catch (exception &ex)
        {
            cout << "Someting Went wrong" << ex.what() << endl;
            break;
        }

    delete[] ptr;
    ptr = nullptr;
    cout << "Ending well!" << endl;

    ptr = new (nothrow) float{343.33}; // thsi is only one value

    if (ptr != nullptr)
        cout << "Data Allocated and the data is:" << *ptr << endl;

    else
        cout << "Data Allocation Failed" << endl;

    delete ptr;
    ptr = nullptr;

    ptr = new float[5]{3, 4, 64, 6, 2};
    for (size_t i{}; i < 5; i++)
    {
        cout << i + 1 << "th Element is: " << *(ptr + i) << endl;
    }
    delete[] ptr;
    ptr = nullptr;
    cout << "The code is Ending Well>>" << endl;
    return 0;
}