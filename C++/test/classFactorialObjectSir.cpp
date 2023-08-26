#include <iostream>
class Integer
{
private:
    int num;
    long long int factValue;

public:
    Integer(int);
    void factorial();
    void display();
};
Integer::Integer(int n)
{
    num = n;
    factValue = 1;
}
void Integer::factorial()
{
    for (int i{1}; i <= num; i++)
    {
        factValue = factValue * i;
    }
}
void Integer::display()
{
    std::cout << "The factorial of " << num << " is:" << factValue << std::endl;
}

int main()
{
    Integer int1(15);
    int1.factorial();
    int1.display();
}