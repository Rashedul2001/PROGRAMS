#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    v.push_back(-1);
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = 0;
    int max = -1;
    for (int i = 0; i < n; i++) // we pushed back a value but didn't increment n so i<n-1 is not correct
    {
        if (v[i] > max && v[i] > v[i + 1])
        {
            ans++;
        }
        max = std::max(max, v[i]);
    }
    cout << ans << endl;

    return 0;
}
