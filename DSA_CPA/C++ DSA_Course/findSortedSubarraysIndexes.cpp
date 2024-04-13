#include <iostream>
#include <vector>
#include <utility>

// Function to find all sorted subarrays within an unsorted array
std::vector<std::pair<int, int>> findSortedSubarrays(std::vector<int> &arr)
{
    std::vector<std::pair<int, int>> sortedSubarrays;
    int n = arr.size();
    int start = 0;

    while (start < n)
    {
        // Find the start of a potential sorted subarray
        int end = start + 1;
        while (end < n && arr[end] >= arr[end - 1])
        {
            end++;
        }

        // If the subarray is sorted, record its indices
        if (end - start > 1)
        {
            sortedSubarrays.push_back(std::make_pair(start, end - 1));
        }

        // Move to the next potential subarray
        start = end;
    }

    return sortedSubarrays;
}

int main()
{
    // Example unsorted array
    std::vector<int> arr = {1, 3, 5, 2, 4, 6, 8, 9, 7};

    // Find all sorted subarrays
    std::vector<std::pair<int, int>> sortedSubarrays = findSortedSubarrays(arr);

    // Print the start and end indices of each sorted subarray
    std::cout << "Sorted Subarrays:" << std::endl;
    for (const auto &subarray : sortedSubarrays)
    {
        std::cout << "Start Index: " << subarray.first << ", End Index: " << subarray.second << std::endl;
    }

    return 0;
}
