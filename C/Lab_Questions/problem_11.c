#include <stdio.h>

int main(void)
{
    int n, temp, inverse = 0, sum = 0;
    printf("Enter a positive integer number: ");
    scanf("%d", &n);
    temp = n;
    while (temp)
    {
        inverse = inverse * 10 + (temp % 10);
        sum += temp % 10;
        temp /= 10;
    }
    printf("The inverse number is: %d\n and the sum is: %d\n", inverse, sum);
}