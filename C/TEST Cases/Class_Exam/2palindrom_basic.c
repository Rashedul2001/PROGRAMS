
#include <stdio.h>

int main(void)
{
    char st[100];
    int flag = 1, i = 0, j;
    printf("Enter the string to check:");

    scanf("%c", &st[i]);
    while (st[i] != '\n')
    {
        i++;
        scanf("%c", &st[i]);
    }
    st[i] = '\0';
    for (i = i - 1, j = 0; st[j] != '\0'; j++, i--)
    {
        if (st[i] != st[j])
        {
            flag = 0;
            break;
        }
    }
    // printf("\n%s and i= %d", st, i);
    if (flag == 0)
        printf("\nnot palindrom");
    else
        printf("\npalindrom");

    return 0;
}