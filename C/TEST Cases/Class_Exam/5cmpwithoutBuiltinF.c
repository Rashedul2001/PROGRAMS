//
#include <stdio.h>
int main(void)
{
    char string1[100], string2[100];
    int i = 0, flag = 1;
    printf("Enter your first string:");
    scanf("%c", &string1[i]);
    while (string1[i] != '\n')
    {
        i++;
        scanf("%c", &string1[i]);
    }
    string1[i] = '\0';
    int len1 = i;
    printf("\nYour first string is: %s", string1);
    printf("\nEnter you second string:");
    i = 0;
    scanf("%c", &string2[i]);
    while (string2[i] != '\n')
    {
        i++;
        scanf("%c", &string2[i]);
    }
    string2[i] = '\0';
    int len2 = i;
    printf("\nYour second string is: %s", string2);
    if (len1 != len2)
    {
        printf("\nThey are not same.");
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            if (string2[i] != string1[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            printf("\nThey are not the same.\n");
        else
            printf("\nThey are same.\n");
    }

    return 0;
}