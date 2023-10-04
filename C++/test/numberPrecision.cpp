#include <iostream>
#include <iomanip>

int main(void)
{
    long double num{1334534.34433}; // for the numbers before .

    // std::cout << std::setprecision(20);
    std::cout << "The number is " << num << std::endl;
    std::cout << "The Sizeof is:  " << sizeof(num) << "and " << sizeof(double) << std::endl;

    return 0;
}

/* #include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Printing the two variables
    cout << "Double Type Number  = " << a << endl;
    cout << "Float Type Number  = " << b << endl;

    return 0;
}
 */