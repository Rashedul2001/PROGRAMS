#include <stdio.h>
int main(void)
{
    char string[100];
    int len = 0;
    printf("Enter you string:");
    scanf("%c", &string[len]);
    while (string[len] != '\n')
    {
        len++;
        scanf("%c", &string[len]);
    }
    string[len] = '\0';
    printf("\nThe string is: %s", string);
    printf("\nThe length of the string is: %d", len);
    return 0;
}