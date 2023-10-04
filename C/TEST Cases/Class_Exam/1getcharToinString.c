#include <stdio.h>
int main(void)
{
    char in_st[100];
    int i = -1;

    printf("Enter the string:");
    while (in_st[i] != '\n')
    {
        i++;
        in_st[i] = getchar();
    }
    in_st[i] = '\0';
    printf("\nThe string is: %s", in_st);
    return 0;
}