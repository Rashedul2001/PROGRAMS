#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

    int i = 1;
    char *text, c;
    printf("Enter your text(stop:1): ");
    text = (char *)malloc(1 * sizeof(char));
    if (text == NULL)
    {
        printf("Error:");
        exit(1);
    }
    while (1)
    {
        scanf("%c", &c);
        if (c == '1')
            break;
        else
        {
            text[i - 1] = c;
            i++;
            text = (char *)realloc(text, i * sizeof(char));
            if (text == NULL)
            {
                printf("Error:");
                exit(1);
            }
        }
    }
    printf("What do you want to do?\n1.string to lower case.\t2.String to upper case.\n");
    scanf(" %c", &c);
    if (c == '1')
        for (int j = 0; j < i - 1; j++)
        {
            text[j] = tolower(text[j]);
            printf("%c", text[j]);
        }
    else if (c == '2')
    {
        for (int j = 0; j < i - 1; j++)
        {
            text[j] = toupper(text[j]);
            printf("%c", text[j]);
        }
    }
}