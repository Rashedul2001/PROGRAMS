#include <iostream>

void printArray(const int array[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << array[i] << (i == n - 1 ? '\n' : ' ');
}
void insertElement(int array[], int &n, int pos, int element)
{
    if (pos <= 0 or pos > n)
    {
        std::cout << "Invalid Position." << std::endl;
        return;
    }
    for (int i = n; i >= pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos - 1] = element;
    n++;
    std::cout << element << " was inserted at position " << pos << std::endl;
}
void deleteElement(int array[], int &n, int pos)
{
    if (pos <= 0 or pos > n)
    {
        std::cout << "Invalid Position." << std::endl;
        return;
    }
    for (int i = pos - 1; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    n--;
    std::cout << "Element at position " << pos << " deleted." << std::endl;
}

int main()
{
    int array[1000]{1, 2, 3, 4, 5, 6};
    int n = 6;

    std::cout << "Initial Array" << std::endl;
    printArray(array, n);
    insertElement(array, n, 4, 9);
    std::cout << "After Insertion the Array:" << std::endl;
    printArray(array, n);
    deleteElement(array, n, 5);
    std::cout << "After Deleting The Array: " << std::endl;
    printArray(array, n);

    return 0;
}