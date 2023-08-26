#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1 = 10, num2 = 5;
    swap(&num1, &num2);
    printf("num1=%d\n", num1);
    printf("num2=%d\n", num2);
}