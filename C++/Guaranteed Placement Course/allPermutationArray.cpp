#include <iostream>
#include <vector>
std::vector<std::vector<int>> ans;
void getAllPermutations(std::vector<int> vec, int pos)
{

    if (pos == vec.size())
    {
        ans.push_back(vec);
        return;
    }

    for (int i = pos; i < vec.size(); i++)
    {
        // if (i != pos && vec.at(i) == vec.at(pos))// for not distinct values
        // {
        //     continue;
        // }
        std::swap(vec[i], vec[pos]);
        getAllPermutations(vec, pos + 1);
        std::swap(vec[i], vec[pos]);
    }
}

int main()
{

    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (auto &i : vec)
    {
        std::cin >> i;
    }

    getAllPermutations(vec, 0);
    std::cout << "\n\n";
    for (auto f : ans)
    {
        for (auto s : f)
        {
            std::cout << s << " ";
        }
        std::cout << "\n";
    }

    return 0;
}