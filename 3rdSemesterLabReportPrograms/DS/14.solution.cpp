#include <iostream>
#include <vector>
class Stack
{
private:
    std::vector<int> data;

public:
    void push(int value)
    {
        data.push_back(value);
    }
    void pop()
    {
        if (!data.empty())
        {
            data.pop_back();
            return;
        }
        std::cerr << "Stack is empty" << std::endl;
    }
    int top()
    {
        if (!data.empty())
            return data.back();
        std::cerr << "Stack is empty" << std::endl;
        return -1;
    }
    bool empty()
    {
        return data.empty();
    }
    int size()
    {
        return data.size();
    }
};

int main()
{
    Stack myStack;
    myStack.push(1);
    myStack.push(5);
    myStack.push(6);
    myStack.push(11);
    std::cout << "Top element after insertion: " << myStack.top() << std::endl;
    myStack.pop();

    std::cout << "Top element after deletion: " << myStack.top() << std::endl;

    return 0;
}
