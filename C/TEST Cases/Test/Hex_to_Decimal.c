#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
void main()
{
    char hex[100];
    long long int decimal = 0;
    int i, length, temp, j;
    printf("Enter Hexadecimal Number:");
    gets(hex);
    length = strlen(hex);
    for (i = 0, j = length - 1; hex[i] != '\0'; i++, j--)
    {
        if (hex[i] <= 'f' && hex[i] >= 'a')
        {
            temp = (hex[i] - 48);
            decimal += temp * pow(16, length);
        }
    }
    printf("\n %lld", decimal);
}