#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int kadane(const vector<int> &vec)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (auto it : vec)
    {
        currSum += it;
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }
    int wrapSum = 0;
    int nonWrapSum = 0;
    int totalSum = 0;
    nonWrapSum = kadane(vec);
    for (auto &it : vec)
    {
        totalSum += it;
        it = -it;
    }
    wrapSum = totalSum + kadane(vec);
    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}
