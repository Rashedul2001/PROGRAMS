#include <stdio.h>

int main(void)
{
    long long int binary;
    int decimal = 0;

    printf("Enter the binary number:");
    scanf("%lld", &binary);
    for (int i = 1; binary != 0; i *= 2)
    {
        if (binary % 10 > 1)
        {
            printf("invalid number.");
            return 0;
        }
        decimal = decimal + (i * (binary % 10));
        binary /= 10;
    }
    printf("The decimal is: %d", decimal);
}