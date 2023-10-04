#include <iostream>

int main(void)
{
    int decimal{100};
    int octal = 0100;
    int hexadecimal = 0x100;
    int binary = 0b100;

    std::cout << "Decimal=" << decimal << std::endl;
    std::cout << "Octal=" << octal << std::endl;
    std::cout << "Hexadecimal=" << hexadecimal << std::endl;
    std::cout << "Binary=" << binary << std::endl;

    return 0;
}