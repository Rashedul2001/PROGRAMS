#include <iostream>
#include <vector>

int main()
{
    int n, sum;
    std::cin >> n >> sum;
    std::vector<int> arr(n);
    for (auto &i : arr)
    {
        std::cin >> i;
    }
    int i = 0, j, tempSum = 0;
    while (i < n)
    {
        j = i;
        tempSum = 0;
        while (j < n && tempSum < sum)
        {
            tempSum += arr[j];
            j++;
        }
        if (tempSum == sum)
        {
            break;
        }
        i++;
    }
    if (tempSum == sum)
    {
        std::cout << "Indexes are: " << i + 1 << " " << j << std::endl;
    }
    else
    {
        std::cout << "No Contiguous SubArray found" << std::endl;
    }
    return 0;
}
