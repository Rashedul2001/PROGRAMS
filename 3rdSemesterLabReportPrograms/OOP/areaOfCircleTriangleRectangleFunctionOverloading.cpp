#include <iostream>
#include <cmath>

#define PI 3.14159265

double area(double length, double width)
{
    return length * width;
}
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double area(double radius)
{
    return PI * pow(radius, 2);
}

int main()
{
    double length, width, a, b, c, radius;
    std::cout << "Enter the size of three sides of the Triangle: ";
    std::cin >> a >> b >> c;
    std::cout << "The Area of the Triangle is : " << area(a, b, c) << std::endl;

    std::cout << "Enter the Length and Width of the the Rectangle: ";
    std::cin >> length >> width;
    std::cout << "The Area of the Rectangle is : " << area(length, width) << std::endl;

    std::cout << "Enter the Radius of the Circle: ";
    std::cin >> radius;
    std::cout << "The Area of the Circle is : " << area(radius) << std::endl;

    return 0;
}
