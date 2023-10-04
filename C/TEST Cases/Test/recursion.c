#include <stdio.h>
#include <conio.h>

int getfact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * getfact(a - 1);
    }
}
int main(void)
{
    int num, fact;

    printf("Enter the number to find factorial: ");
    scanf("%d", &num);
    fact = getfact(num);
    printf("Factorial of %d is : %d", num, fact);

    getch();
    return 0;
}