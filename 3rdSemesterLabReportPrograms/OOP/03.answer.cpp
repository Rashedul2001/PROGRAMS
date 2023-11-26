#include <iostream>
#include <cmath>

class Number
{
private:
    int data;
    bool primeStatus;
    void setPrimeStatus(int num)
    {
        if (num <= 1)
        {
            primeStatus = false;
            return;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                primeStatus = false;
                return;
            }
        }
        primeStatus = true;
    }

public:
    Number(int num) : data{num} { setPrimeStatus(data); }
    bool getPrimeStatus()
    {
        return primeStatus;
    }
};
int main()
{
    std::cout << "Enter a number:";
    int num;
    std::cin >> num;
    Number n1(num);
    if (n1.getPrimeStatus())
        std::cout << num << " is a Prime Number." << std::endl;
    else
        std::cout << num << " is not a Prime Number." << std::endl;

    return 0;
}
