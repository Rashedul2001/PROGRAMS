#include <iostream>
#include <vector>
#include <climits>

struct MinMax
{
    int min;
    int max;
};

MinMax findMinMax(const std::vector<int> &arr, int left, int right)
{
    MinMax result;

    if (left == right)
    {
        result.min = arr[left];
        result.max = arr[left];
        return result;
    }

    if (right == left + 1)
    {
        if (arr[left] < arr[right])
        {
            result.min = arr[left];
            result.max = arr[right];
        }
        else
        {
            result.min = arr[right];
            result.max = arr[left];
        }
        return result;
    }

    int mid = left + (right - left) / 2;

    MinMax leftResult = findMinMax(arr, left, mid);
    MinMax rightResult = findMinMax(arr, mid + 1, right);

    result.min = std::min(leftResult.min, rightResult.min);
    result.max = std::max(leftResult.max, rightResult.max);

    return result;
}

int main()
{
    std::vector<int> arr = {1000, 11, 445, 1, 330, 3000};
    int n = arr.size();

    MinMax result = findMinMax(arr, 0, n - 1);

    std::cout << "Minimum element is " << result.min << std::endl;
    std::cout << "Maximum element is " << result.max << std::endl;

    return 0;
}
