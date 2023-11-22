#include <iostream>
class Float
{

private:
    float data;

public:
    Float(float data) : data{data} {}
    float operator+(Float other) { return data + other.data; }
    float operator-(Float other) { return data - other.data; }
    float operator*(Float other) { return data * other.data; }
    float operator/(Float other) { return data / other.data; }
};

int main()
{
    Float f1(25.6), f2(5.2);
    std::cout << f1 + f2 << std::endl;
    std::cout << f1 - f2 << std::endl;
    std::cout << f1 * f2 << std::endl;
    std::cout << f1 / f2 << std::endl;

    return 0;
}