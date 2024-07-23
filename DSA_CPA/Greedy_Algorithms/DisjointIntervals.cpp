#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    for (auto &a : intervals)
    {
        cin >> a.first;
        cin >> a.second;
    }

    sort(intervals.begin(), intervals.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.second < b.second; });

    int start = intervals[0].first, end = intervals[0].second, count = 1;

    for (auto &it : intervals)
    {
        if (end < it.first)
        {
            count++;
            start = it.first;
            end = it.second;
        }
    }
    cout << count << endl;  

    return 0;
}