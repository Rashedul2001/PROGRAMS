#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto &i : v)
    {
        std::cin >> i;
    }
    std::sort(v.begin(), v.end());

    std::vector<std::vector<int>> ans;
    do
    {
        ans.push_back(v);
    } while (std::next_permutation(v.begin(), v.end()));
    for (auto i : ans)
    {
        for (auto j : i)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}