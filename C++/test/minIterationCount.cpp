#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums{1, 2, 3, 2, 1, 1, 4, 5, 4, 4, 4};
    map<int, int> count;
    int min_count = nums.size();
    int min_num = 0;
    int minIndex{};
    for (int num : nums)
    {
        count[num]++;
    }
    for (std::map<int, int>::iterator it = count.begin(); it != count.end(); it++)
    {
        if (it->second < min_count)
        {
            min_count = it->second;
            min_num = (*it).first;
        }
    }
    auto it = std::find(nums.begin(), nums.end(), min_num);
    if (it != nums.end())
        minIndex = it - nums.begin();

    cout << "The number that occurs the least is: " << min_num << endl;
    cout << "The index of the number is:" << minIndex << endl;

    return 0;
}