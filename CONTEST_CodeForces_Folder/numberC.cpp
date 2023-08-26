

/*
MD Rashedul Hasan
ISTT
Bangladesh
*/
#ifdef RASHEDUL
#include "helpingHand.h"
#endif

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <utility>
#include <iomanip>
#include <limits>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned int;

#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define E '\n'

const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    /*START:)*/

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans1{numeric_limits<int>::max()}, ans2;
        vi Time1, Time2;
        bool flag = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int m;
            string s1;
            cin >> m >> s1;

            if (s1 == "10")
                Time1.pb(m);
            if (s1 == "01")
                Time2.pb(m);
            if (s1 == "11")
            {
                if (ans1 > m)
                    ans1 = m;

                flag = true;
            }
        }

        if ((flag == false) && (Time1.empty() || Time2.empty()))
        {
            cout << -1 << '\n';
        }
        else
        {
            ans2 = (*min_element(all(Time1))) + (*min_element(all(Time2)));
            cout << min(ans1, ans2) << '\n';
        }
    }

    return 0;
}
