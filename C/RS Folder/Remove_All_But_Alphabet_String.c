// Removing Alphabet form string and also it can't remove symbol so don't put any symbol
#include <stdio.h>
#include <conio.h>
#include <string.h>
// if you don't understand this code try to understand what will happend with a input every time
int main()
{
    char string[1024];
    int i, j;

    printf("Enter your string:");
    gets(string);
    // for (i = 0; string[i]!='\n'; i++)
    // {
    //     string[i]=getchar();
    // }
    // string[i]='\0';
    // not working, solve it later
    for (i = 0; string[i] != '\0'; i++)
    {
        while (!(string[i] <= 'z' && string[i] >= 'a') && !(string[i] <= 'Z' && string[i] >= 'A') && (string[i] != '\0'))

        {
            for (j = i; string[j] != '\0'; j++)
                string[j] = string[j + 1];
        }

        string[j] = '\0';
    }
    printf("Output String: ");
    puts(string);
}