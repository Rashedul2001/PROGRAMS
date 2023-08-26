#include <iostream>
#include <stack>

int main()
{
    std::stack<int> newstack;

    std::cout << "First Size: " << newstack.size() << std::endl;
    for (int i{}; i < 5; i++)
    {
        std::cout << "Enter number" << i + 1 << ':';
        int temp;
        std::cin >> temp;
        newstack.push(temp);
    }
    std::cout << "Size after storing data: " << newstack.size() << std::endl;
    newstack.pop();
    std::cout << "After Poping a data, new size is:" << newstack.size() << std::endl;

    return 0;
}