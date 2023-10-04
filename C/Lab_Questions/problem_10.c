#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);
    while (n)
    {
        sum += pow(n, -n);
        n--;
    }
    printf("The sum is: %lf", sum);
}