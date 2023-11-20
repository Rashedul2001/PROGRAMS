#include <iostream>

class Third;
class Second;
class First
{
    friend int findMax(First &, Second &, Third &);

private:
    int number;

public:
    First(int n) : number{n} {}
};

class Second
{
    friend int findMax(First &, Second &, Third &);

private:
    int number;

public:
    Second(int n) : number{n} {}
};

class Third
{
    friend int findMax(First &, Second &, Third &);

private:
    int number;

public:
    Third(int n) : number{n} {}
};

int findMax(First &first, Second &second, Third &third)
{
    return std::max(std::max(first.number, second.number), third.number);
}

int main()
{
    First firstNumber(20);
    Second secondNumber(30);
    Third thirdNumber(10);
    std::cout << "The Maximum is " << findMax(firstNumber, secondNumber, thirdNumber) << std::endl;

    return 0;
}
