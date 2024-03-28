#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int, std::vector<int>> memo;
std::vector<int> bestSum(int targetSum, std::vector<int> &numbers)
{
    if (memo.find(targetSum) != memo.end())
        return memo[targetSum];
    if (targetSum == 0)
        return {};
    if (targetSum < 0)
        return {-1};
    std::vector<int> shortestCombination = {-1};
    for (auto it : numbers)
    {
        std::vector<int> tempResult = bestSum(targetSum - it, numbers);
        if (tempResult.empty() || tempResult[0] != -1)
        {
            tempResult.push_back(it);
            if (shortestCombination[0] == -1 || shortestCombination.size() > tempResult.size())
            {
                shortestCombination = tempResult;
            }
        }
    }
    memo[targetSum] = shortestCombination;
    return shortestCombination;
}

int main()
{

    std::vector<int> numbers = {5, 3, 4, 7};
    std::vector<int> result = bestSum(7, numbers);
    if (result[0] != -1)
    {
        for (auto it : result)
        {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No Combination is available" << std::endl;
    }

    numbers = {2, 3, 5};
    result = bestSum(8, numbers);
    for (auto it : result)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    numbers = {1, 3, 6, 10, 15};
    result = bestSum(20, numbers);
    for (auto it : result)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    numbers = {1, 3, 6, 10, 15};
    result = bestSum(200, numbers);
    for (auto it : result)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    return 0;
}