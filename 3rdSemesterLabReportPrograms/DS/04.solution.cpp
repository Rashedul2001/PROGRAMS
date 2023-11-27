#include <iostream>
#include <unordered_map>
typedef unsigned long long int ull;

std::unordered_map<int, ull> memo;
ull fibonacci(int num)
{
    if (num <= 1)
        return num;
    if (memo.find(num) == memo.end())
        memo[num] = fibonacci(num - 1) + fibonacci(num - 2);
    return memo[num];
}
int main()
{
    std::cout << "Enter amount of Fibonacci Numbers you want:";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
