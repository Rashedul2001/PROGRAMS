#include <stdio.h>
int main(void)
{
    int flag = 0, array[] = {34, 234, 56, 78, 9, 10}, input;
    printf("Enter what you want to search:");
    scanf("%d", &input);
    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
    {
        if (input == array[i])
        {
            printf("The element is present in the array.");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The element is not present in the array.");
    return 0;
}