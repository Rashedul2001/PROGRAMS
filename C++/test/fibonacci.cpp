#include <iostream>
int fib(int n)
{
    if (n <= 2)
        return 1;
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    std::cout << fib(3) << '\n';
    std::cout << fib(5) << '\n';
    std::cout << fib(8) << '\n';
    std::cout << fib(10) << '\n';

    std::cout << fib(50) << '\n';

    return 0;
}