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
long long binPow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void Solve()
{
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    while (q--)
    {

        bool flag = true;
        int l, r;
        cin >> l >> r;
        string tempStr;
        for (int i = l-1; i < r; i++)
        {
            tempStr += str[i];
            int len = tempStr.length();
            map<char, int> charCount;
            int maxCharCount = 0;
            for (auto it : tempStr)
            {
                charCount[it]++;
                maxCharCount = max(maxCharCount, charCount[it]);
            }
            // cout << "''''" << tempStr << " " << len << " " << maxCharCount << ' ' << len / 2 << "''''" << endl;
            if (maxCharCount > len / 2 && len >= 3)
            {
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    // #ifdef RASHEDUL
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    // #endif
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