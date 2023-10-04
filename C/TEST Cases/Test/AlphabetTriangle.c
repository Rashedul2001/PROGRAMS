#include <stdio.h>

int main(void)
{
    int space, row;
    printf("Please Enter the row number: ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        char alphabet = 'A';
        for (int j = row - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
            printf("%c", alphabet++);
        alphabet--;
        for (int j = 0; j < i; j++)
            printf("%c", --alphabet);
        printf("\n");
    }
    return 0;
}