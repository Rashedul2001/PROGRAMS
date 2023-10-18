#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maxArea(vector<int> &vec)
{
    stack<int> s;
    int maxArea = 0, len = vec.size();
    int i = 0;
    while (i < len)
    {
        if (s.empty() || vec[i] >= vec[s.top()])
        {
            s.push(i);
            i++;
        }
        else
        {
            int tp = s.top();
            s.pop();
            int width = (s.empty() ? i : i - s.top() - 1);
            maxArea = max(maxArea, width * vec[tp]);
        }
    }
    while (!s.empty())
    {
        int tp = s.top();
        s.pop();
        int width = (s.empty() ? i : i - s.top() - 1);
        maxArea = max(maxArea, width * vec[tp]);
    }
    return maxArea;

}

int main()
{
    vector<int> recHight = {2, 1, 5, 6, 2, 3};
    // vector<int> recHight = {1, 2, 3, 4, 5, 6, 7};
    // vector<int> recHight = {7, 6, 5, 4, 3, 2, 1};
    // vector<int> recHight = {5, 3, 2, 1, 4};
    // vector<int> recHight = {3, 3, 3, 3, 3, 3};
    cout << maxArea(recHight) << endl;

    return 0;
}
