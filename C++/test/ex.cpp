#include <iostream>

class Shape
{
public:
    virtual void printCharacteristics() const = 0;
};

class Rectangle : public Shape
{
private:
    double length, breadth;
    double area;

public:
    Rectangle(double length, double breadth) : length{length}, breadth{breadth}
    {
        area = breadth * length;
    }
    double getArea() const { return area; }
    void printCharacteristics() const override
    {
        std::cout << "Area of the Rectangle is : " << area << std::endl;
    }
};
class Cube : public Rectangle
{
private:
    double hight;
    double volume;

public:
    Cube(double length, double breadth, double hight) : Rectangle(length, breadth), hight{hight}
    {
        volume = getArea() * hight;
    }
    void printCharacteristics() const override
    {
        std::cout << "Volume of the Cube is : " << volume << std::endl;
    }
};

int main()
{
    Shape *basePtr;
    basePtr = new Rectangle(9.3, 6);
    basePtr->printCharacteristics();
    delete basePtr;
    basePtr = new Cube(9, 6, 9.2);
    basePtr->printCharacteristics();
    delete basePtr;

    return 0;
}
