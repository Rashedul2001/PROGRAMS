#include <iostream>
#define PI 3.14159265

long double volume(double x, double y, double z) { return x  * y * z; };
long double volume(double rad, double height) { return PI * rad * rad * height; };
long double volume(double x) { return x * x * x; };

int main()
{
    std::cout << "Enter the Length, Breadth,height of the Rectangle: ";
    int length, breadth, height;
    std::cin >> length >> breadth >> height;
    std::cout << "The Volume of the Rectangle is: " << volume(length, breadth, height) << std::endl;
    std::cout << "Enter the Radius and Height of the Cylinder: ";
    int radius;
    std::cin >> radius >> height;
    std::cout << "The Volume of the Cylinder is: " << volume(radius, height) << std::endl;
    std::cout << "Enter the length of a side of The Cube: ";
    std::cin >> length;
    std::cout << "The Volume of the Cube is: " << volume(length) << std::endl;

    return 0;
}