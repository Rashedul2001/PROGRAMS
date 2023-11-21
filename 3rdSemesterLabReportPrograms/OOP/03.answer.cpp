#include <iostream>
#include <cmath>

class Number
{
private:
    int data;
    bool status;
    void setStatus(int num)
    {
        if (num <= 1)
        {
            status = false;
            return;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                status = false;
                return;
            }
        }
        status = true;
    }

public:
    Number(int num) : data{num} { setStatus(data); }
    bool getStatus()
    {
        return status;
    }
};
int main()
{
    std::cout << "Enter a number:";
    int num;
    std::cin >> num;
    Number n1(num);
    if (n1.getStatus())
        std::cout << num << " is a Prime Number." << std::endl;
    else
        std::cout << num << " is not a Prime Number." << std::endl;

    return 0;
}
