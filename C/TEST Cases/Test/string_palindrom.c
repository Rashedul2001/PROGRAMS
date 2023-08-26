#include <stdio.h>
#include <string.h>
int main()
{
    do
    {
        char word[50];
        printf("\n\nEnter the word to check(-1 to exit):");
        scanf("%s", word);
        // (strcmp(word, "-1"))? : break;
        
        if (strcmp(word, "-1")) // there is a way to do it in one sentence but in this time i forgot what is it
        ;
        else
            break;
        char temp[50];
        strcpy(temp, word);

        if (strcmp(word, strrev(temp)))       // strcmp returns 0 if two strings are the same.. and
            printf("Word is not Palindrom."); // resturns -1 if not
        else
            printf("Word is Palindrom.");
    } while (1);
}
