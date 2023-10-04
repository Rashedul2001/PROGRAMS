// Complete but ready to be upgraded

#include <stdio.h>
void prntMultTable(int);
void line(int);

int main(void)
{
    int n;
    printf("MULTIPLICATION TABLE:\n");
    line(10);
    printf("Enter the number of Table you want: ");

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        prntMultTable(i);
    }

    return 0;
}
void line(int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("--");
    }
    printf("\n");
}

void prntMultTable(int n)
{
    printf("\nMultiplication Table of %d:\n\n", n);
    line(8);
    for (int i = 1; i < 11; i++)
    {

        printf("| %2d X %2d = %2d |\n", n, i, i * n);
        line(8);
    }
}
