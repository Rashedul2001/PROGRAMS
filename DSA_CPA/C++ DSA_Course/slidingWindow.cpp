#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

// int main()
// {
//     // time complexity is O(n long n);
//     int arraySize, windowSize;
//     cin >> arraySize >> windowSize;
//     vector<int> array(arraySize);
//     for (auto &i : array)
//         cin >> i;

//     multiset<int, greater<int>> s;
//     vector<int> ans;
//     for (int i = 0; i < windowSize; i++)
//     {
//         s.insert(array[i]);
//     }
//     ans.push_back(*s.begin());
//     for (int i = windowSize; i < arraySize; i++)
//     {
//         s.erase(s.lower_bound(i - windowSize));
//         s.insert(array[i]);
//         ans.push_back(*s.begin());
//     }
//     for (auto it : ans)
//     {
//         cout << it << ' ';
//     }

//     return 0;
// }

int main()
{
    // time complexity O(n)
    int arraySize, windowSize;
    cin >> arraySize >> windowSize;
    vector<int> array(arraySize);
    for (auto &it : array)
    {
        cin >> it;
    }
    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < arraySize; i++)
    {
        if (!q.empty() and q.front() == i - windowSize)
            q.pop_front();
        while (!q.empty() and array[q.back()] <= array[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        if (i >= windowSize - 1)
            ans.push_back(array[q.front()]);
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
// 1 3 -1 -3 5 3 6 7
