#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value{v} {}
    int getValue() const
    {
        return value;
    }
    // prefix increment operator(++x)
    Number &operator++()
    {
        value++;

        return *this;
    }
    Number operator++(int)
    {
        Number temp(value);
        ++value;

        return temp;
    }
    Number operator+(const Number &other)
    {
        Number add(value + other.getValue());

        return add;
    }

    friend ostream &operator<<(ostream &os, const Number &n)
    {
        os << n.value;
        return os;
    }
};

int main()
{
    Number c1{5}, c2{10}, c3{15};
    cout << "C1 class value: " << c1.getValue() << endl;
    cout << "C2 class value: " << c2.getValue() << endl;
    cout << "C3 class value: " << c3.getValue() << endl;
    ++c1;
    cout << "After using prefix increment Operator C1 value: " << c1.getValue() << endl;
    c1++;
    cout << "After using postfix increment Operator C1 value: " << c1.getValue() << endl;
    cout << "printing the addition of c1 and c2: " << c1 + c2 << endl;

    return 0;
}