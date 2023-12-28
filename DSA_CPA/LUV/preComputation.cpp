#include <iostream>
using namespace std;
const int m = 1e5 + 10;
long long fact[m]; // won't store everything correctly.. it's just an example of pre-computation
int main()
{
    int q;
    cin >> q;
    fact[0] = fact[1] = 1;
    for (int i = 2; i < m; i++)
        fact[i] = fact[i - 1] * i;

    while (q--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    return 0;
}