#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    const int N = 1e6 + 2;
    vector<int> rep(N, -1);
    int minIndex = INT_MAX;
    for (int i{}; i < n; i++)
    {
        if (rep[arr[i]] != -1)
        {
            minIndex = min(minIndex, rep[arr[i]]);
        }
        else
        {
            rep[arr[i]] = i;
        }
    }
    if (minIndex == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
        cout << minIndex + 1 << '\n';

    return 0;
}