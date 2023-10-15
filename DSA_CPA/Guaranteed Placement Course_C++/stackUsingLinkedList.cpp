#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data) : data{data}, next{nullptr} {}
};

class Stack
{
private:
    Node *stackTop;
    int stackSize;

public:
    Stack() : stackTop{nullptr}, stackSize{0} {}
    bool empty()
    {
        if (stackTop == nullptr)
        {
            return true;
        }
        else
            return false;
    }

    void display()
    {
        if (empty())
        {
            std::cout << "Nothing to Show..." << std::endl;
            return;
        }
        Node *temp = stackTop;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void push(int data)
    {
        Node *node = new Node(data);
        node->next = stackTop;
        stackTop = node;
        stackSize++;
    }
    int top()
    {
        if (empty())
        {
            std::cerr << "The Stack is empty..." << std::endl;
            return -1;
        }
        return stackTop->data;
    }
    void pop()
    {
        if (empty())
        {
            std::cout << "Underflow!" << std::endl;
            return;
        }

        Node *toDelete = stackTop;
        stackTop = stackTop->next;
        delete toDelete;
        stackSize--;
    }
    int size()
    {
        return this->stackSize;
    }
    ~Stack()
    {
        while (!empty())
        {
            pop();
        }
    }
};

int main()
{

    Stack st;
    st.pop();
    std::cout << st.top() << std::endl;
    st.display();
    st.push(560);
    st.push(655);
    st.display();
    std::cout << st.size() << std::endl;
    st.pop();
    std::cout << st.size() << std::endl;
    std::cout << st.top() << std::endl;

    return 0;
}
