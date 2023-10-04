/*Find Frequency of a letter in a string */
#include<conio.h>
#include <stdio.h>
int main()
{
    char string[1024], ch;
    int count = 0;
    printf("Enter your String:\n ");
    gets(string);
    printf("Enter the character you want to find and count:\n");
    scanf("%c", &ch);
    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] == ch)
            count++;
    printf("Frequency of %c = %d", ch, count);
    getch();
    return 0;
}
