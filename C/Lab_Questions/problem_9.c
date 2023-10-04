#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the last number:");
    scanf("%d", &n);
    int a = 0, b = 1, temp;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d ", a);
        else if (i == 1)
            printf("%d", b);
        else
        {
            temp = a + b;
            printf(" %d", temp);
            a = b;
            b = temp;
        }
    }
}