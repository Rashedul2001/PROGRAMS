#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100], strev[100];
    printf("Enter your string: ");
    scanf("%[^\n]", str);
    strcpy(strev, str);
    strrev(strev);
    if (strcmp(strev, str) == 0)

        printf("The String is Palindrome.\n");

    else
        printf("The String is not Palindrome.\n");
    return 0;
}