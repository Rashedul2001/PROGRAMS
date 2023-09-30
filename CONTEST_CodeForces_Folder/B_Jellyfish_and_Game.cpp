/*MD Rashedul Hasan
ISTT
Bangladesh
*/

#ifdef RASHEDUL
#include "helpingHand.h"
#endif

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int uint;

#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define es '\n'
#define fori(x)       \
    for (auto &i : x) \
    {                 \
        cin >> i;     \
    }
const int mod = 1e9 + 7;
const int maxN = 1e6;

void Solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    multiset<ll> a;
    multiset<ll> b;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.insert(temp);
    }
    for (ll i = 0; i < m; i++)
    {
        ll temp;
        cin >> temp;
        b.insert(temp);
    }
    if (k & 1)
    {
        if (k > 1)
        {
            // first time full
            // second time full
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
            b.insert(*(a.begin()));
            b.erase(*(prev(b.end())));
            // first end

            b.insert(*(prev(a.end())));
            b.erase(*(b.begin()));
            a.erase(*(prev(a.end())));
            a.insert(*(b.begin()));
            // second end
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
            b.insert(*(a.begin()));
            b.erase(*(prev(b.end())));
        }
        else
        {
            // first time full
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
        }
    }
    else
    {
        if (k > 2)
        {
            // first time full
            // second time full
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
            b.insert(*(a.begin()));
            b.erase(*(prev(b.end())));
            // first end

            b.insert(*(prev(a.end())));
            b.erase(*(b.begin()));
            a.insert(*(b.begin()));
            a.erase(*(prev(a.end())));
            // second end
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
            b.insert(*(a.begin()));
            b.erase(*(prev(b.end())));

            // inserting the lowest value
            a.insert(*(b.begin()));
            //   deleting the biggest value
            a.erase(*(prev(a.end())));
        }
        else
        {
            // first time full
            // second time full
            a.insert(*(prev(b.end())));
            a.erase(*(a.begin()));
            b.insert(*(a.begin()));
            b.erase(*(prev(b.end())));
            // first end

            b.insert(*(prev(a.end())));
            b.erase(*(b.begin()));
            a.erase(*(prev(a.end())));
            a.insert(*(b.begin()));
            // second end
        }
    }
    ll sum = 0;
    for (auto it : a)
    {

        sum += it;
    }
    cout << sum << es;
}

int main()
{
#ifdef RASHEDUL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // START:)

    int T{1};
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}