
// where ever it's posible use { } this insted of ( )....

#include <iostream>

using namespace std;

class Fraction
{
private:
    int m_numerator{0};
    int m_denominator{1};

public:
    void print() const
    {
        cout << m_numerator << "/" << m_denominator << endl;
    }

    Fraction(int numerator, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator} {}
    friend Fraction operator*(const Fraction &a, const Fraction &b);
    friend Fraction operator*(const Fraction &a, int b);
    friend Fraction operator*(int a, const Fraction &b);
};
Fraction operator*(const Fraction &a, const Fraction &b)
{
    int numerator{a.m_numerator * b.m_numerator};
    int denominator{a.m_denominator * b.m_denominator};
    return Fraction(numerator, denominator);
}
Fraction operator*(const Fraction &a, int b)
{
    int numerator{a.m_numerator * b};
    int denominator{a.m_denominator};
    return (numerator, denominator);
}
Fraction operator*(int a, const Fraction &b)
{
    return {b * a};
}

int main()
{
    Fraction f1(2, 5), f2{3, 8}, f3(f1 * f2), f4{f1 * 2}, f5{2 * f2};
    Fraction f6{Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4}};

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    f6.print();

    return 0;
}