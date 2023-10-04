#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int *getpointer(void)
{
    int *second;
    printf("Enter three numbers:");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &second[i]);
    }
    return second;
}

int main(void)
{
    int *first;
    first = getpointer();
    for (int i = 0; i < 3; i++)
    {
        printf("\n %d ", *(first + i));
    }
}