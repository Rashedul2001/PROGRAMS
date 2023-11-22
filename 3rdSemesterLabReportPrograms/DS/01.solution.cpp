#include <iostream>

int main()
{
    int array[] = {25, 1, 7, 26, 86, 61, 12, 73, 99, 5};
    int maxElement = array[0];
    int minElement = array[0];
    for (int i = 1; i < 10; i++)
    {
        maxElement = std::max(maxElement, array[i]);
        minElement = std::min(minElement, array[i]);
    }
    std::cout << "Max element of the array is " << maxElement << std::endl;
    std::cout << "Min element of the array is " << minElement << std::endl;

    return 0;
}
