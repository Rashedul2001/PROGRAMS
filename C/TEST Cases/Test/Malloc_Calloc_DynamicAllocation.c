// this is a code for getting sum of n numbers using malloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int i, *point, n, sum = 0;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    point = (int *)malloc(n * sizeof(int));
    // point = (int *)calloc(n, sizeof(int)); // we can use calloc-->benefit of this is that it assigns 0 to all allocated memory

    if (point == NULL)
    {
        printf(" Error! Mamory not allocated.");
        exit(0);
    }
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (point + i));
        sum += *(point + i);
    }
    printf("\nSum is: %d\n", sum);
    free(point); // free allocated memory
    getch();
    return 0;
}