#include <stdio.h>

int main(void)
{
    int a, b, min, GCD;
    printf("Please Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        min = b;
    else
        min = a;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            GCD = i;
    }
    printf("GCD of %d %d is: %d\n", a, b, GCD);
    return 0;
}