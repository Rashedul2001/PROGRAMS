#include <stdio.h>

int main(void)
{
    int array[] = {2, 9, 5, 63, 6}, sum = 0;
    printf("Elements of the array are:");
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
        printf("%d ", array[i]);
    }
    printf("\n Sum of the array elements is: %d", sum);
    return 0;
}