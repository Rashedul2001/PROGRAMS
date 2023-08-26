#include <stdio.h>

int main(void)
{
    printf("Enter Three numbers:");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is the largest element.", a);
    else if (b > a && b > c)
        printf("%d is the largest element.", b);
    else
        printf("%d is the largest element.", c);
}