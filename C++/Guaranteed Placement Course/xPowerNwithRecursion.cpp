#include <iostream>
int Power(int x, int n)
{
    if (n <= 1)
    {
        return x;
    }
    return x * Power(x, n - 1);
}
int main()
{

    int x, n;
    std::cin >> x >> n;
    std::cout << Power(x, n);

    return 0;
}