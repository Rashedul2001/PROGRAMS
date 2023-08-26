#include <iostream>
#include <limits>
#include <numeric> // this is for GCD

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator}
    {
        void reduce();
    }
    friend istream &operator>>(istream &, Fraction &);
    friend ostream &operator<<(ostream &, const Fraction &);

    friend Fraction operator*(const Fraction &, const Fraction &);
    friend Fraction operator*(const Fraction &, int);
    friend Fraction operator*(int, const Fraction &);

    void reduce() // this is a member fuction it can be used outside of the class but can't access member if defined outside the class
    {
        int GCD{gcd(m_numerator, m_denominator)};
        if (GCD) // because it can be 0 as well for assignmented m_numetaro to 0
        {
            m_numerator /= GCD;
            m_denominator /= GCD;
        }
    }
};

istream &operator>>(istream &input, Fraction &fraction)
{
    input >> fraction.m_numerator;
    input.ignore(numeric_limits<streamsize>::max(), '/');
    input >> fraction.m_denominator;
    fraction.reduce(); // this have to be done because it works with exsiting object members
    // without this the constructor reduce call will never be called for this object
    // cause it has been already created before but now we are just replacing the member with other values

    return input;
}
ostream &operator<<(ostream &output, const Fraction &fraction)
{
    output << fraction.m_numerator << '/' << fraction.m_denominator;
    return output;
}

Fraction operator*(const Fraction &a, const Fraction &b)
{
    return Fraction{a.m_numerator * b.m_numerator, b.m_denominator * b.m_denominator};
}

Fraction operator*(const Fraction &a, int b)
{
    return {a.m_numerator, a.m_denominator};
}
Fraction operator*(int a, const Fraction &b)
{
    return {b * a};
}

int main()
{
    Fraction f1;
    std::cout << "Enter fraction 1: ";
    std::cin >> f1;

    Fraction f2;
    std::cout << "Enter fraction 2: ";
    std::cin >> f2;

    std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n'; // note: The result of f1 * f2 is an r-value

    return 0;
}