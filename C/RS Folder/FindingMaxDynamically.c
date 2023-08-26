#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array, count = 0, max = 0, input;
    printf("Enter the numbers to find the maximum(end=-1):");
    array = (int *)malloc(1 * sizeof(int));
    if (array == NULL)
    {
        printf("Error: Out of memory");
        exit(0);
    }
    while (1)
    {
        scanf("%d", &input);
        if (input != -1)
        {
            array[count] = input;
            count++;
            array = (int *)realloc(array, sizeof(int) * (count + 2));
            if (array == NULL)
            {
                printf("Error: Out of memory");
                exit(0);
            }
        }
        else
            break;
    }
    for (int j = 0; j < count; j++)
    {
        if (array[j] > max)
            max = array[j];
    }
    printf("Maximum is %d\n", max);
    return 0;
}