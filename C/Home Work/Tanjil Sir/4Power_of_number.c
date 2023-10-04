#include <math.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    double base, power, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &power);

    // calculates the power
    result = pow(base, power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);
    getch;
    return 0;
}