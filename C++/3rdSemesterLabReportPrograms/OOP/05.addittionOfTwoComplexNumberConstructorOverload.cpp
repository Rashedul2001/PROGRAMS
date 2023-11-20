#include <iostream>

class Complex
{
private:
    double mReal;
    double mImag;

public:
    Complex() : mReal{0.0}, mImag{0.0} {}
    Complex(double real, double imag) : mReal{real}, mImag{imag} {}
    void display() const
    {
        std::cout << mReal << " + " << mImag << "i" << std::endl;
    }

    Complex operator+(Complex &other)
    {
        return Complex(mReal + other.mReal, mImag + other.mImag);
    }
};

int main()
{

    Complex c1{1.0, 2.0};
    Complex c2{3.0, 4.0};
    c1.display();
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
