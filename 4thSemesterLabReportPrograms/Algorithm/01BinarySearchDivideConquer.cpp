#include <iostream>
#include <vector>

int binarySearch(const std::vector<int> &arr, int left, int right, int target)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, right, target);
    }

    return -1;
}

int main()
{
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int n = arr.size();

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        std::cout << "Element found at index " << result << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
