#include <iostream>
void test(int *arr)
{
    for (int i{}; i < 5; i++)
    {
        std::cout << arr[i] << ' ';
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    test(arr);

    return 0;
}