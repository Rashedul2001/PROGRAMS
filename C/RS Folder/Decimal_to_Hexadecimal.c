#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    int j, i = 0;
    long int num, temp, Thex;
    char hex[1024], Tempstr[1024] = "0";
    printf("Enter your decimal number to convert to hexadecimal:");
    scanf("%ld", &num);
    temp = num;
    if (num == 0)
    {
        printf("\n Hexadecimal of %d is: %s", num, Tempstr);
        getch();
        exit(0);
    }
    else
        while (temp != 0)
        {
            Thex = temp % 16;
            temp /= 16;
            switch (Thex)
            {
            case 10:
                Tempstr[i] = 'A';
                break;
            case 11:
                Tempstr[i] = 'B';
                break;
            case 12:
                Tempstr[i] = 'C';
                break;
            case 13:
                Tempstr[i] = 'D';
                break;
            case 14:
                Tempstr[i] = 'E';
                break;
            case 15:
                Tempstr[i] = 'F';
                break;
            default:
                Tempstr[i] = 48 + Thex; // it takes the ascci code as input and give that character else it won't work
                break;
            }

            i++;
        }
    Tempstr[i] = '\0';
    for (j = 0; i - 1 >= 0; i--, j++)
        hex[j] = Tempstr[i - 1];

    hex[j] = '\0';

    printf("\n Hexadecimal of %d is: %s", num, hex);
    getch();
    return 0;
}