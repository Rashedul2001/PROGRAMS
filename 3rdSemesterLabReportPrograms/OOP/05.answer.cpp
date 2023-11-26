#include <iostream>
#define PI 3.14159265
typedef long double ld;

ld volume(double x, double y, double z) { return x * y * z; }
ld volume(double rad, double height) { return PI * rad * rad * height; }
ld volume(double x) { return x * x * x; }

int main()
{
    std::cout << "Enter the Length, Breadth,height of the Rectangle: ";
    double length, breadth, height;
    std::cin >> length >> breadth >> height;
    std::cout << "The Volume of the Rectangle is: " << volume(length, breadth, height) << std::endl;
    std::cout << "Enter the Radius and Height of the Cylinder: ";
    double radius;
    std::cin >> radius >> height;
    std::cout << "The Volume of the Cylinder is: " << volume(radius, height) << std::endl;
    std::cout << "Enter the length of a side of The Cube: ";
    std::cin >> length;
    std::cout << "The Volume of the Cube is: " << volume(length) << std::endl;

    return 0;
}