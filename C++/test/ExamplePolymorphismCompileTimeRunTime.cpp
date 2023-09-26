#include <iostream>

// runtime Polymorphism starting block
class Shape
{
public:
    virtual double area() const { return 0.0; }
    // double area() const { return 0.0; }
};
class Circle : public Shape
{

private:
    double radius;

public:
    Circle(double radius) : radius{radius} {}
    double area() const override { return radius * radius * 3.141592653589; }
    // double area() const { return radius * radius * 3.141592653589; }
};
class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double length, double width) : length{length}, width{width} {}
    double area() const override { return length * width; }
    // double area() const { return length * width; }
};

void printArea(Shape &shape)
{

    std::cout << "Area: " << shape.area() << std::endl;
}
// runtime Polymorphism  end block

// compile Time polymorphism
class Calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {

        return a + b;
    }
};

int main()
{

    Shape *shapeList[2];
    shapeList[0] = new Circle(5);
    shapeList[1] = new Rectangle(6, 2);
    std::cout << "Example of Runtime Polymorphism...." << std::endl;
    // function overriding
    for (Shape *shape : shapeList)
    {
        std::cout << "Area: " << shape->area() << std::endl;
    }
    // function Parameter
    Circle circle(56);
    Rectangle rectangle(5, 6);
    printArea(circle);
    printArea(rectangle);
    // runtime polymorphism ended

    // compileTime polymorphism
    std::cout << "Example of compileTime Polymorphism...." << std::endl;
    Calculator calculate;
    // function overloading
    std::cout << calculate.add(5, 5) << std::endl;
    std::cout << calculate.add(0.1, 0.2) << std::endl;

    return 0;
}