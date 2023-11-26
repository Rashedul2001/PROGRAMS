#include <iostream>

class area_cl
{
public:
    double height;
    double width;

    area_cl(double x, double y) : height(x), width(y) {}
};
class Rectangle : public area_cl
{
public:
    Rectangle(double x, double y) : area_cl(x, y) {}
    double area()
    {
        return height * width;
    }
};
class Isosceles :public area_cl
{
public:
    Isosceles(double x, double y) : area_cl(x, y) {}
    double area()
    {
        return 0.5 * width * height;
    }
};

int main()
{
    Rectangle rec(26, 2);
    Isosceles iso(26, 2);
    std::cout << "The area of the Rectangle is: " << rec.area() << std::endl;
    std::cout << "The area of the Isosceles is: " << iso.area() << std::endl;

    return 0;
}