#include <iostream>
#include <cstdio>

class Integer
{
private:
    int num;
    long long int factValue; // biggest integer type is __int128 that can hold upto 2^127 value
    void factorial();

public:
    Integer(int num)
    {
        this->num = num;
        factValue = 1;
        this->factorial();
    }
    void DisplayFact()
    {
        printf("The Factorial of %d is: %lld", num, factValue);
    }
    long long int getfactValue()
    {
        return factValue;
    }
};
void Integer::factorial() // all the definitions should be in other cpp file and the classes should in a sepatate .h file
{
    for (int i = 1; i <= num; i++)
    {
        factValue = factValue * i;
    }
}
int main()
{
    std::cout << "Enter a number under 21:";
    int num{};
    std::cin >> num;
    Integer number1{num}; // it can also be done by setters
    number1.DisplayFact();
}
