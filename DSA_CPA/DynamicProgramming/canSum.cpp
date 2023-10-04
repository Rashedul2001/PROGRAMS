#include <iostream>
#include <vector>
#include <iomanip>
#include <map>

bool canSum(int targetSum, std::vector<int> arr, std::map<int, bool> &memo)
{
    // in general the time complexity of this is O(n^m) where n is the size of the array and the m is targetSum
    // the space complexity is Always O(m) the number of levels the tree has for this it com have m level at max

    if (memo.find(targetSum) != memo.end())
        return memo[targetSum];

    if (targetSum == 0)
    {
        return true;
    }
    if (targetSum < 0)
    {
        return false;
    }
    for (auto it : arr)
    {
        if (canSum(targetSum - it, arr, memo)) // this is the recursion see the video if you don't understand from freeCodeCamp
        {
            memo[targetSum] = true;
            return true;
        }
    }
    memo[targetSum] = false;
    return false;
}

int main()
{
    std::map<int, bool> memo = {};
    std::cout << std::boolalpha << std::endl;
    std::cout << canSum(7, {2, 3}, memo) << std::endl;
    memo.clear();
    std::cout << canSum(7, {5, 3, 4, 7},memo) << std::endl;
    memo.clear();
    std::cout << canSum(7, {2, 4},memo) << std::endl;
    memo.clear();
    std::cout << canSum(8, {2, 3, 4},memo) << std::endl;
    memo.clear();
    std::cout << canSum(300, {7, 14},memo) << std::endl; // this will take so much time

    return 0;
}