#include <iostream>
using namespace std;

int main()
{
    int arr[]{2, 4, 7, 11, 14, 16, 20, 21};
    int sum = 6;

    int low = 0, high = 7;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            cout << low + 1 << " " << high + 1 << endl;
            return 0;
        }
        else if (arr[low] + arr[high] > sum)
        {
            high--;
        }
        else
            low++;
    }
    cout << "There is no such two element" << endl;
    return 0;
}
