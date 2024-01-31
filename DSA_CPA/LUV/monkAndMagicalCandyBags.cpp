#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<ll> bags;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            bags.insert(temp);
        }
        ll totalCandy = 0;
        while (k--)
        {
            auto lastBag = --bags.end();
            totalCandy += (*lastBag);
            ll toInsert = *lastBag;
            bags.erase(lastBag);
            bags.insert(toInsert / 2);
        }
        cout << totalCandy << endl;
    }

    return 0;
}
