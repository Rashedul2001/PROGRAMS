#include <iostream>

unsigned long long int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    std::cout << "Enter a positive number: ";
    int n;
    std::cin >> n;
    std::cout << "The Factorial of " << n << " is = " << factorial(n) << std::endl;

    return 0;
}
