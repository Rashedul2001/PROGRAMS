#include <iostream>

long long int binPowerMod(long long int a, long long b, long long mod)
{
    a %= mod;
    long long ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    std::cout << binPowerMod(3, 5, 1e7) << std::endl;

    return 0;
}
