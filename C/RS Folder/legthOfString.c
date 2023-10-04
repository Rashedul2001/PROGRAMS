#include <stdio.h>
#include <conio.h>
int main()
{
    char str[1000], i;
    printf("Enter your String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; ++i)
    {
    }

    printf("Length of the string is: %d", i - 1);

    getch();
    return 0;
}