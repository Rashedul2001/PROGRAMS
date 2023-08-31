#include <iostream>
class Number
{
protected:
    int number;

public:
    Number(int num) : number{num} {}
};
class Square : protected Number
{
protected:
    int squareValue;

public:
    Square(int num) : Number{num} { squareValue = number * number; }
};
class Cube : protected Square
{
protected:
    int cubeValue;

public:
    Cube(int num) : Square{num} { cubeValue = squareValue * number; }
    int getCubeValue() { return cubeValue; }
    int getSquareValue() const { return squareValue; }
    int getNumber() const { return number; }
};

int main()
{
    int n;
    std::cin >> n;
    Cube cube(n);
    std::cout << "The number is " << cube.getNumber() << "\nSquare is: " << cube.getSquareValue() << "\nCube is: " << cube.getCubeValue() << std::endl;

    return 0;
}
