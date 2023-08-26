#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents{};

public:
    Cents(int cents) : m_cents{cents} {}
    // this is a getter maybe
    int getCents() const { return m_cents; }
    friend Cents operator+(const Cents &a, const Cents &b);
    friend Cents operator-(Cents &a, Cents &b);
};

Cents operator+(const Cents &a, const Cents &b)
{
    return Cents{a.m_cents + b.m_cents};
}

Cents operator-(Cents &a, Cents &b)
{
    return a.m_cents - b.m_cents;
}

int main()
{
    Cents first(5), second(9);
    Cents Total{first + second}, Substract{first - second};
    cout << "Now I have " << Total.getCents() << " Cents in Total." << endl;
    cout << "Substract " << Substract.getCents() << endl;

    return 0;
}