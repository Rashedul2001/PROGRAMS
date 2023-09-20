#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int maxSum = 0, currentSum = 0;
    for (auto &it : vec)
    {
        cin >> it;
    }
    for (auto it : vec)
    {
        currentSum += it;
        if (currentSum < 0)
            currentSum = 0;
        maxSum = max(maxSum, currentSum);
    }
    cout << "MAX Sum is: " << maxSum << endl;

    return 0;
}
