#include <iostream>

int main()
{
    int array[] = {2, 6, 7, 15, 19, 23, 61, 74, 88, 100};
    std::cout << "Enter the Element you want to Find: ";
    int element;
    std::cin >> element;

    int start = 0, end = sizeof(array) / sizeof(array[0]) - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == element)
        {
            std::cout << "The Element found at Position " << mid + 1 << std::endl;
            return 0;
        }
        else if (array[mid] > element)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    std::cout << "The Element is not present in the Array." << std::endl;
    return 0;
}
