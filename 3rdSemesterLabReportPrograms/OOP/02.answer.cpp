#include <iostream>

class COMPLEX
{
private:
    double real;
    double imaginary;

public:
    COMPLEX() : real(0.0), imaginary(0.0) {}
    COMPLEX(double real, double imag) : real{real}, imaginary{imag} {}
    COMPLEX(const COMPLEX &other) : real(other.real), imaginary(other.imaginary) {}
    void show() const
    {
        std::cout << "The Complex number is: " << real << "+" << imaginary << "i" << std::endl;
    }
    COMPLEX operator+(const COMPLEX &other)
    {
        return COMPLEX(real + other.real, imaginary + other.imaginary);
    }
    void setReal(double real) { this->real = real; }                // can be removed
    void setImaginary(double imag) { this->imaginary = imaginary; } // can be removed
};

int main()
{
    COMPLEX complex1(1, 2.2), complex2(3.6, 0.3);
    COMPLEX complex3 = complex1 + complex2;
    complex3.show();

    return 0;
}
