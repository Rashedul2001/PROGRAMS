#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::vector<int>> &threeSum(std::vector<int> &arr, int target)
{
    static std::vector<std::vector<int>> result;
    if (arr.size() < 3)
        return result;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
        int left = i + 1;
        int right = arr.size() - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target)
            {
                result.push_back({arr[i], arr[left], arr[right]});
                while (left < right and arr[left] == arr[left + 1])
                    left++;
                while (left < right and arr[right] == arr[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < target)
                left++;
            else
                right--;
        }
    }

    return result;
}

int main()
{
    std::cout << "Enter the Length and the Array:";
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (auto &a : arr)
        std::cin >> a;
    std::sort(arr.begin(), arr.end());
    std::cout << "Enter the Target Sum:";
    int target = 0;
    std::cin >> target;
    std::vector<std::vector<int>> result = threeSum(arr, target);
    for (auto re : result)
    {
        for (auto r : re)
        {
            std::cout << r << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}