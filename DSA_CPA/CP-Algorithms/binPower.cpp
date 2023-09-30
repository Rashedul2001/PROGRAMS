// https://cp-algorithms.com/

#include <iostream>

long long int binPow(long long a, long long b)
{
    long long result = 1;
    while (b > 0)
    {

        if (b & 1)
        {
            result = result * a;
        }
        a = a * a;
        b >>= 1;
    }
    return result;
}

int main()
{
    std::cout << binPow(2, 10) << std::endl;
    std::cout << binPow(5, 7) << std::endl;
    std::cout << binPow(8, 12) << std::endl;
    // std::cout << binPow(20, 10) << std::endl;

    return 0;
}

/*

if I do the power of 3^6 here we have to do  3 * 3 * 3 * 3 * 3 * 3 we have to multiply 3 times
but for the binPower algorithm  we have to get the 8 binary which  is 110
we will always have to a to it's right value fo every binary digits position
like for
    1   1   0
  9*9  3*3   3
   81  9   3


and if I get the 1 from the least bit in b
we multiply the result with the a for every bit position value







*/
