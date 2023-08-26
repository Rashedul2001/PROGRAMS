#include <stdio.h>

int main(void)
{
    int a = 10, b = 30;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d and b=%d\n", a, b);
}