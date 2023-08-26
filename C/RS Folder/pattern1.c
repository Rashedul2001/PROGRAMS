#include <stdio.h>

int main(void)
{
    int row, i, j;
    printf("Enter the number of row:");
    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == row - 1 || i == j || j == row - i - 1)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
    return 0;
}