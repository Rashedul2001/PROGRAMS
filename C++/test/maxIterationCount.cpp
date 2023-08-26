#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> numbers{1, 2, 3, 2, 1, 1, 4, 5, 4, 4, 4};
    std::map<int, int> count;
    int maxCount{}, maxNum{}, maxIndex{}, i{};
    for (int num : numbers)
    {
        count[num]++;
        if (count[num] > maxCount)
        {
            maxCount = count[num];
            maxNum = num;
            maxIndex = i;
        }
        i++;
    }
    std::cout << "MaxNumber is:" << maxNum << "\nMaxIndex is:" << maxIndex << "\nMaxCount is:" << maxCount << std::endl;
    return 0;
}
