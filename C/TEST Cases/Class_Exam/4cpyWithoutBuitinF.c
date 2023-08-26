#include <stdio.h>
int main(void)
{
    char string[100], stringcpy[100];
    int i = 0;
    printf("Enter you string:");
    scanf("%c", &string[i]);
    while (string[i] != '\n')
    {
        i++;
        scanf("%c", &string[i]);
    }
    string[i] = '\0';
    printf("The main String is: %s", string);
    for (int j = 0; j <= i; j++)
    {
        stringcpy[j] = string[j];
    }
    printf("\nThe copied string is:%s", stringcpy);
    return 0;
}