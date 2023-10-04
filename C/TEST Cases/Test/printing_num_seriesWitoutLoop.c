#include <stdio.h>

void printnum(int n)
{
    if (n > 0)
    {
        printnum(n - 1);
        printf("%d ", n);
    }
}
int main(void)
{
    int num;
    scanf("%d", &num);
    printnum(num);
}