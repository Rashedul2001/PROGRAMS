/*

Given a Number N. Prints it's factorial .
Constraints
1<=N<=100

print answer modulo M
where M = 47


A%M

*/

#include <iostream>
int main()
{
    int M = 47;
    // let's define M as 10^9+7
    // int M = 10e9 + 7; this is not working it works as a global const value but not here
    // int M = 1000000007;
    int n;
    std::cin >> n;
    int factorial = 1;
    // long long factorial = 1LL;
    while (n != 0)
    {
        factorial = ((factorial % M) * (n % M)) % M; // (factorial*n)%M
        n--;
        // for n =100 this code won't work for value like this big to encounter the overflow we must use long long to hold the factorial
    }
    std::cout << factorial << std::endl;

    return 0;
}