#include <stdio.h>

int main(void)
{
    int num = -1, i;
    long long int binary = 0;
    printf("Enter the number to convert:");
    scanf("%d", &num);
    for (i = 1; num != 0; i *= 10)
    {
        binary = binary + (num % 2) * i;

        num /= 2;
    }
    printf("The Binary number is: %lld\n", binary);
    return 0;
    // now write a binary to integer program....
}