#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void generate(vector<int> &nums, int index, vector<int> &temp)
{
    if (index == nums.size())
    {
        ans.push_back(temp);
        return;
    }
    generate(nums, index + 1, temp);
    temp.push_back(nums[index]);
    generate(nums, index + 1, temp);
    temp.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> temp;
    generate(nums, 0, temp);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &I : nums)
        cin >> I;

    vector<vector<int>> subSets = subsets(nums);
    for (auto I : subSets)
    {
        for (auto I2 : I)
            cout << I2 << ' ';
        cout << endl;
    }

    return 0;
}