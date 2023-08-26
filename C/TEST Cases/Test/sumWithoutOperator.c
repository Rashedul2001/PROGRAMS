#include <stdio.h>

int sum(int a, int b)
{
    return printf("%*c%*c", a, ' ', b, ' ');
}
#include <stdio.h>

int main(void)
{
    printf("Enter two integer number to sum:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Summation is: %d", sum(a, b));
}

/* int main(void)
{
    printf("Enter two integer numbers to sum:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        while (a)
        {
            b++;
            a--;
        }
    }
    else
    {
        while (b)
        {
            a++;
            b--;
        }
    }
}
 */