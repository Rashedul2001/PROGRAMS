#include <iostream>
#include <vector>

class Queue
{
private:
    std::vector<int> data;

public:
    void push(int val)
    {
        data.push_back(val);
    }
    void pop()
    {
        if (data.empty())
        {
            std::cerr << "Cannot pop Queue is empty!" << std::endl;
            return;
        }
        data.erase(data.begin());
    }
    int front()
    {
        if (data.empty())
        {
            std::cerr << "Queue is Empty!" << std::endl;
            return -1;
        }
        return data.front();
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    std::cout << "After inserting data front of the Queue is: ";
    std::cout << q.front() << std::endl;
    q.pop();
    std::cout << "After deleting a data, front of the Queue is: ";
    std::cout << q.front() << std::endl;
};