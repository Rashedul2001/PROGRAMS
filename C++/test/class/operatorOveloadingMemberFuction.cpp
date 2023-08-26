#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) : m_cents{cents} {}
    Cents operator+(int value);
    int getcents() { return m_cents; }
};
Cents Cents::operator+(int value) // this is a member function but because it is defined outside of the class
// it needs to use Cents:: the resulation operator to tell which class it belongs to
// implicitly all member function parameter has the *this object for which we can use m_cents directly
{
    return Cents{m_cents + value};
}

int main()
{
    Cents c1{5};
    Cents c2(c1 + 9);
    cout << "Now I have " << c2.getcents() << " Cents." << endl;

    return 0;
}
