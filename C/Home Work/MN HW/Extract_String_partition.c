#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char mstr[1024], nstr[1024];
    int n, m, i, j;
    printf("Enter the string:");
    scanf("%[^\n]", mstr);
    printf("Enter the starting position where you want to cut:");
    scanf("%d", &n);
    printf("Enter the number of characters to cut:");
    scanf("%d", &m);
    for (i = n, j = 0; i < (m + n); i++, j++)
    {
        nstr[j] = mstr[i];
    }
    nstr[j] = '\0';
    puts(nstr);

    getch();
    return 0;
}












