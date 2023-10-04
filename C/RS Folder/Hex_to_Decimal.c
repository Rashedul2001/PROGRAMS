#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i = 0, len;
    long long decimal = 0;
    char hex[1024];
    printf("Enter Hexadecimal number to convert: ");
    scanf("%s", hex);
    len = strlen(hex) - 1;
    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * pow(16, len);
            len--;
        }
        else if (hex[i >= 'a'] && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * pow(16, len);
            len--;
        }
        else if (hex[i] <= 'F' && hex[i] >= 'A')
        {
            decimal += (hex[i] - 55) * pow(16, len);
            len--;
        }
        else
        {
            printf("Invalid Input: %c", hex[i]);
            getch();
            exit(1);
        }

        i++;
    }
    printf("\nThe decimal value is: %lld", decimal);
    getch();
    return 0;
}