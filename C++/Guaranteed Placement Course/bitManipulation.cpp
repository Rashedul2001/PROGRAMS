#include <iostream>
using namespace std;
int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}
int clearBit(int num, int pos)
{
    int mask = ~(1 << pos);
    return (num & mask);
}
int updateBit(int num, int pos, int value)
{
    int cleanBit = (num & ~(1 << pos));
    return cleanBit | (value << pos);
}

int main()
{
    int num, pos;
    cin >> num >> pos;

    cout << getBit(num, pos) << endl;
    cout << setBit(num, pos) << endl;
    cout << clearBit(num, pos) << endl;
    cout << updateBit(num, pos, 1) << endl;

    return 0;
}
