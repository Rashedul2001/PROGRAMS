#include <stdio.h>
#include <conio.h>
void reverse();
int main()
{
    printf("Enter a sentence:");
    reverse();
    getchar();

    return 0;
}
void reverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}