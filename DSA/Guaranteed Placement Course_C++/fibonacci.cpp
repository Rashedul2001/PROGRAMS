#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first = 0, second = 1, sum = 0;
    for (int i{}; i < n; i++)
    {
        cout << first << ' ';
        sum = first + second;
        first = second;
        second = sum;
    }
}

int main()
{

    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}