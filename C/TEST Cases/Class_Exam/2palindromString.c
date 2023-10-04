#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[100], rev[100];
    int comp;
    printf("Enter the string:");
    gets(string);
    strcpy(rev, string);
    strrev(rev);
    comp = strcmp(string, rev);
    if (comp == 0)
    {
        printf("The string is palindorm.");
    }
    else
    {
        printf("The string not palindrom");
    }
    return 0;
}