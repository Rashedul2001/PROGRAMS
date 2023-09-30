#include <iostream>
const int maxSize = 1000;

class stack
{
private:
    int *data;
    int size;

public:
    stack() : data{new int[maxSize]}, size{-1} {}
    void push(int data)
    {
        if (size >= maxSize)
        {
            std::cout << "Stack Overflow" << std::endl;
            return;
        }
        size++;
        this->data[size] = data;
    }
    int top()
    {
        if (size == -1)
        {
            std::cout << "The stack is empty" << std::endl;
            return -1;
        }
        return this->data[size];
    }
    void pop()
    {
        if (size == -1)
        {
            std::cout << "Nothing to pop" << std::endl;
            return;
        }

        size--;
    }
    bool empty()
    {
        if (size == -1)
        {
            return true;
        }
        return false;
    }
    void clear() { size == -1; }
    int Size()
    {
        return size + 1;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    std::cout << "The Size of the Stack is : " << st.Size() << std::endl;
    while (!st.empty())
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    st.pop();
    st.clear();
    st.top();

}
