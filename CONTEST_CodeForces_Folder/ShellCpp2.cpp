#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ii pair<ll, ll>
#define iii pair<ii, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define lb lower_bound
#define ub upper_bound

#define rep(x, start, end) for (int x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        string s, t;

        int num = n;
        rep(x, 0, n) s += "BAN";
        rep(x, 0, 3 * n)
        {
            if (x % 3 == 0)
                t += "B";
            else
            {
                if (num)
                {
                    t += "N";
                    num--;
                }
                else
                {
                    t += "A";
                }
            }
        }

        vector<int> a, b;
        rep(x, 0, 3 * n)
        {
            if (s[x] == 'A' && t[x] == 'N')
                a.pub(x);
            if (s[x] == 'N' && t[x] == 'A')
                b.pub(x);
        }

        cout << sz(a) << endl;
        rep(x, 0, sz(a)) cout << a[x] + 1 << " " << b[x] + 1 << endl;
    }
}

// #include <iostream>
// #include <cstdio>
// using namespace std;
// #define N 1012
// int T, n, ans[N];
// int main()
// {
//     srand(19260817);
//     cin >> T;
//     while (T--)
//     {
//         cin >> n;
//         int x;
//         ans[1] = 0;
//         cout << "1 2" << endl;
//         fflush(stdout);
//         cin >> x;
//         ans[2] = x ? ans[1] : (ans[1] ^ 1);
//         ans[0] = 1;
//         for (int i = min(n, 4); i >= 3; i = min(i + 2, n))
//         {
//             if (1ll * rand() * rand() < 1ll * rand() * rand())
//             {
//                 cout << "1"
//                      << " " << i << endl;
//                 fflush(stdout);
//                 cin >> x;
//                 if (x >= 2)
//                 {
//                     for (int j = max(i - 1, i - x + 1); j <= i; j++)
//                         ans[j] = ans[j - (i - x + 1) + 1];
//                 }
//                 else
//                 {
//                     if (x && (ans[1] == ans[2]))
//                     {
//                         ans[i] = ans[1];
//                         ans[i - 1] = ans[1] ^ 1;
//                     }
//                     else
//                     {
//                         if (x)
//                             ans[i] = ans[1];
//                         else
//                             ans[i] = ans[1] ^ 1;
//                         if ((!x) && (ans[1] != ans[2]))
//                         {
//                             ans[i - 1] = ans[1] ^ 1;
//                         }
//                         else
//                         {
//                             cout << "1"
//                                  << " " << i - 1 << endl;
//                             fflush(stdout);
//                             cin >> x;
//                             ans[i - 1] = ans[x];
//                         }
//                     }
//                 }
//             }
//             else
//             {
//                 cout << "2"
//                      << " " << i << endl;
//                 fflush(stdout);
//                 cin >> x;
//                 if (x >= 2)
//                 {
//                     for (int j = max(i - 1, i - x + 1); j <= i; j++)
//                         ans[j] = ans[j - (i - x + 1) + 1] ^ 1;
//                 }
//                 else
//                 {
//                     if ((!x) && (ans[1] != ans[2]))
//                     {
//                         ans[i] = ans[1];
//                         ans[i - 1] = ans[1];
//                     }
//                     else
//                     {
//                         if (x)
//                             ans[i] = ans[1] ^ 1;
//                         else
//                             ans[i] = ans[1];
//                         if (x && (ans[1] == ans[2]))
//                         {
//                             ans[i - 1] = ans[1];
//                         }
//                         else
//                         {
//                             cout << "1"
//                                  << " " << i - 1 << endl;
//                             fflush(stdout);
//                             cin >> x;
//                             ans[i - 1] = ans[x];
//                         }
//                     }
//                 }
//             }
//             if (i == n)
//                 break;
//         }
//         cout << "0 ";
//         for (int i = 1; i <= n; i++)
//             cout << ans[i];
//         cout << endl;
//         fflush(stdout);
//         cin >> x;
//     }
//     return 0;
// }