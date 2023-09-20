// next_permutation without using STL
// but we will other methods it needed

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter a number you want to know it's next permutation:";
    int num;
    cin >> num;
    vector<int> numbers;
    while (num)
    {
        int temp = num % 10;
        numbers.push_back(temp);
        num /= 10;
    }
    reverse(numbers.begin(), numbers.end());
    int loc = -1;
    for (int i = numbers.size() - 2; i >= 0; i--)
    {
        if (numbers[i] < numbers[i + 1])
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
    {
        cout << "No Next Permutation is available.";
        return 0;
    }

    for (int i = numbers.size() - 1; i >= 0; i--)
    {
        if (numbers[i] > numbers[loc])
        {
            swap(numbers[i], numbers[loc]);
            break;
        }
    }
    reverse(numbers.begin() + loc + 1, numbers.end());
    for (auto it : numbers)
    {
        cout << it;
    }

    return 0;
}
/*

#include <algorithm>
#include <vector>

bool nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Find the first element from the right that is smaller than its next element.
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // If no such element is found, the sequence is in descending order (largest permutation).
    // Return false to indicate that no further permutation is possible.
    if (i < 0) {
        return false;
    }

    // Find the smallest element from the right that is greater than the element at index i.
    int j = n - 1;
    while (j > i && nums[j] <= nums[i]) {
        j--;
    }

    // Swap the elements at indices i and j to get the next lexicographically greater permutation.
    std::swap(nums[i], nums[j]);

    // Reverse the elements from index i+1 to the end to get the smallest permutation after i.
    std::reverse(nums.begin() + i + 1, nums.end());

    // Return true to indicate that a next permutation exists.
    return true;
}
*/