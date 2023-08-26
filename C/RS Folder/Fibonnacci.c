#include <stdio.h>
#include <conio.h>

int main(void)
{

    int i, n, a = 0, b = 1, temp;
    printf("Enter the length of fibonnacci series:");
    scanf("%d", &n);
    printf("The fibonnacci series is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }

    getch();
    return 0;
}