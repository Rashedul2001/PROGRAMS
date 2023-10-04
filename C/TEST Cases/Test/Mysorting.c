#include <stdio.h>
#include <stdlib.h>
void upsort(int *, int);
void downsort(int *, int);

int main(void)
{
    printf("Enter how many number you want to short:");
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter you numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("\n1.INCREASIGN \t2.DECREASING\nEnter how you want to short: ");
    int choice;
    scanf(" %d", &choice);
    if (choice == 1)
    {
        upsort(arr, n);
    }
    else if (choice == 2)
    {
        downsort(arr, n);
    }
    else
    {
        printf("Good Bye.....");
    }

    return 0;
}

void upsort(int *p, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[i] > p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
}
void downsort(int *p, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[i] < p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
}
