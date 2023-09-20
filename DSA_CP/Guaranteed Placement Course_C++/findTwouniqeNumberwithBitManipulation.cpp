#include <iostream>
using namespace std;
bool getBit(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}
int unique(int *arr, int n)
{
    int xorSum{};
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
}

int main()
{

    int arr[]{1, 3, 5, 2, 6, 1, 3, 6};

    return 0;
}
