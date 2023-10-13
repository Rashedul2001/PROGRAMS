#include <iostream>
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
using namespace std;

int main()
{
    cout << 15%27<< " "<< 27%15 << endl;

    return 0;
}