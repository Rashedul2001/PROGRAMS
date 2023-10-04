#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char text[2048], word[100], temp[2048], nword[100], ntext[2048], oldtext[2048];
    int count1 = 0, count2 = 0, wlen, mlen, i, j;
    int k, l, m, n;
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin); // reading input and geting rid of the newline
    text[strcspn(text, "\n")] = '\0'; // because it giving a extra 1 length but it happens only on fgets()
    strcpy(oldtext, text);
    mlen = strlen(text);
    do
    {
        printf("\nEnter the word you want to replace: ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = '\0';
        wlen = strlen(word);
        printf("Enter the word you want to replace it with: ");
        fgets(nword, sizeof(nword), stdin);
        nword[strcspn(nword, "\n")] = '\0';
        for (i = 0; i < mlen; i++)
        {
            for (j = 0; j < wlen; j++)
            {
                if (text[j + i] == word[j])
                {
                    count1++; // counting occurrence of every single character
                    // printf("count1::::%d",count1);
                }
            }
            if (count1 == wlen) // processing whether its same as the word to find
            {
                count2++; // counting occurrence
                for (k = i + j, n = 0; text[k] != '\0'; k++, n++)
                {
                    temp[n] = text[k]; // cutting the last part of the string and putting it to temp
                }
                temp[n] = '\0';
                for (k = 0; k < i; k++)
                {
                    ntext[k] = text[k]; // geting the parts before the word
                }
                ntext[k] = '\0';
                strcat(ntext, nword);
                strcat(ntext, temp);
                strcpy(text, ntext);
            }
            count1 = 0;
        }
        if (count2 == 0)
        {
            printf("\nNo matched word found......");
            continue;
        }
        if (count2 > 0)
        {
            printf("\nold text was: %s", oldtext);
            printf("\n%d words were changed in the text>>>>", count2);
            printf("\n\nNew text is: %s\n\n", ntext);
            count2 = 0;

            printf("want to change something else in the text....\n press 'Y' to continue anything else to exit:");
            char cd;
            scanf("%c", &cd);
            fflush(stdin);
            if (cd == 'y' || cd == 'Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
    } while (TRUE);
    return 0;
}