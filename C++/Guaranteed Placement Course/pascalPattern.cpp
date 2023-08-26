#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int space = (n - i - 1);
        for (int j = 0; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
