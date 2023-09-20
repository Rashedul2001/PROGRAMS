#include <iostream>
int totalSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + totalSum(n - 1);
}
int main()
{
    int n;
    std::cin >> n;

    std::cout << totalSum(n);

    return 0;
}
