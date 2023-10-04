#include <stdio.h>
#include <ctype.h>

void sort(int size, int *arr, char choice)
{
    if (choice == 'A')
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] > arr[i])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
}

int main(void)
{
    int array[] = {43, 353, 22, 63, 25, 633};
    char choice;
    printf("Before sort: ");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n In which order you want to sort it?\n A for Ascending and D for Descending:");
    scanf(" %c", &choice);
    choice = toupper(choice);
    sort(sizeof(array) / sizeof(array[0]), array, choice);
    printf("\nAfter sort: ");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}