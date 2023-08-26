#include <iostream>
using namespace std;
void subSets(int arr[], int n)
{
    for (int i{}; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // seeing if there is any set bit for every bit
            {
                cout << arr[j] << ' ';
            }
        }
        std::cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    subSets(arr, 4);

    return 0;
}