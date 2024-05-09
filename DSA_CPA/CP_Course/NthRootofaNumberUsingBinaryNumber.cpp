#include <iostream>
#include <iomanip>
const double prec = 10e-6;

double mul(const double& mid, int n)
{
    double result = 1;
    while (n--)
    {
        result *= mid;
    }
    return result;
}

int main()
{
    double num;
    std::cout << "Enter your Number: ";
    std::cin >> num;
    std::cout << "Enter the value of n (root): ";
    int n;
    std::cin >> n;
    double low = 0, high = num;
    while (high - low > prec)
    {
        double mid = low + (high - low) / 2;
        if (mul(mid,n) > num)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    std::cout << "The " << n << " Root of " << num << " is: " <<high << std::endl;

    return 0;
}