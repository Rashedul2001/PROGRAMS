#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    printf("%d\n", a);
    printf("%d\n", p1);
    printf("%d\n", *p1);
    printf("%d\n", *p2);
    printf("%d\n", **p2);
    printf("%d\n", *p3);
    printf("%d\n", ***p3);

    return 0;
}