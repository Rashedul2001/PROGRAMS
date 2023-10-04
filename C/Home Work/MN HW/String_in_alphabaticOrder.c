#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char st[1000], c;
    int i, j;
    printf("Enter the string:");
    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = '\0'; // it returns the int num 
    for (i = 0; st[i] != '\0'; i++)
    {
        for (j = 1 + i; st[j] != '\0'; j++)
        {
            if (st[i] > st[j])
            {
                c = st[i];
                st[i] = st[j];
                st[j] = c;
            }
        }
    }
    printf("The string in alphabetic order:%s", st);
    getch();
    return 0;
}