#include <iostream>

class Second;
class First
{
    friend void swapValues(First &, Second &);

private:
    int m_value;

public:
    First(int value) : m_value{value} {}

    int getValue() const { return m_value; }
};
class Second
{
    friend void swapValues(First &, Second &);

private:
    int m_value;

public:
    Second(int value) : m_value{value} {}

    int getValue() const { return m_value; }
};
void swapValues(First &first, Second &second)
{
    std::swap(first.m_value, second.m_value);
}

int main()
{
    First f1(10);
    Second s1(20);
    std::cout << "Before swapping Values First class value: " << f1.getValue() << " Second class Value: " << s1.getValue() << std::endl;
    swapValues(f1, s1);
    std::cout << "After swapping Values First class value: " << f1.getValue() << " Second class Value: " << s1.getValue() << std::endl;

    return 0;
}