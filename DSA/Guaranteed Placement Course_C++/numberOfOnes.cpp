#include <iostream>
int numberOfOnes(int num)
{
    int count = 0;
    while (num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}
int main()
{

    std::cout << numberOfOnes(111);

    return 0;
}
