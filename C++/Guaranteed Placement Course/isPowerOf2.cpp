#include <iostream>
#include <iomanip>

using namespace std;

bool isPowerOf2(int num)
{
    return (num && !(num & (num - 1)));
}
int main()
{
    cout << boolalpha;

    cout << isPowerOf2(64) << endl;
    cout << isPowerOf2(264) << endl;

    return 0;
}