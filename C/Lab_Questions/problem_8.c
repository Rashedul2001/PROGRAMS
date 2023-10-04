#include <stdio.h>

int main(void)
{
    int num;
    long long int factorial = 1;
    printf("Enter an integer number to find Factorial:");
    scanf("%d", &num);
    printf("Factorial of %d ", num);
    while (num)
    {
        factorial = factorial * num;
        num--;
    }
    printf("is : %lld", factorial);

    return 0;
}