#include <iostream>
using namespace std;

int divisible(int num, int a, int b)
{
    int a1 = num / a;
    int b1 = num / b;
    int c1 = num / (a * b);
    return a1 + b1 - c1;
}

int main()
{
    int num, a, b;
    cin >> num >> a >> b;

    cout << divisible(num, a, b);

    return 0;
}
