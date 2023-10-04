#include <iostream>
#include <vector>
#include <map>
std::map<int, std::vector<int>> memo;

std::vector<int> howSum(int targetSum, std::vector<int> &numbers)
{
    if (memo.find(targetSum) != memo.end())
        return memo[targetSum];
    if (targetSum == 0)
        return {};
    if (targetSum < 0)
        return {-1};
    for (auto it : numbers)
    {
        std::vector<int> result = howSum(targetSum - it, numbers);
        if (result.empty() || result[0] != -1)
        {
            result.push_back(it);
            memo[targetSum] = result;
            return result;
        }
    }
    memo[targetSum] = {-1};
    return {-1};
}

// m = targetSum;
// n= numbers.length();
// Brute force Time complexity O(m*n^m)
// space complexity O(m);

// Memoized Time complexity O(n*m^2);
// space complexity O(m^2) some trade off for time 



int main()
{
    std::vector<int> numbers = {2, 3};
    std::vector<int> result = howSum(7, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }
    numbers = {5, 3, 4, 7};
    result = howSum(7, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }
    numbers = {2, 4};
    result = howSum(7, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }
    numbers = {2, 3, 5};
    result = howSum(8, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }
    numbers = {7, 14};
    result = howSum(300, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }
    numbers = {60, 26, 6, 5};
    result = howSum(301, numbers);
    memo.clear();
    if (result[0] != -1)
    {

        for (auto it : result)
        {
            std::cout << it << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No combination found" << std::endl;
    }

    return 0;
}