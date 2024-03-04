#include <iostream>
#include <stack>
#include <vector>

int trappedRainWater(std::vector<int> arr)
{
    int ans = 0, len = arr.size();
    std::stack<int> s;
    for (int i = 0; i < len; i++)
    {
        while (!s.empty() and arr[i] > arr[s.top()])
        {
            int tp = s.top();
            s.pop();
            if (s.empty())
                break;
            int diff = i - s.top() - 1;
            ans += (std::min(arr[s.top()], arr[i]) - arr[tp]) * diff;
        }
        s.push(i);
    }
    return ans;
}

int main()
{
    std::vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    std::cout << trappedRainWater(arr) << std::endl;

    return 0;
}
