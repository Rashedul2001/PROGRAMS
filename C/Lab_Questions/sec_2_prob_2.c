#include <stdio.h>

int main(void)
{
    int array[] = {4, 66, 32, 2, 16}, max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    printf("The largest element of the array is: %d\n", max);
    return 0;
}