#include <iostream>
int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {

        return 1;
    }
    return tilingWays(n - 1) + tilingWays(n - 2);
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << tilingWays(n);

    return 0;
}