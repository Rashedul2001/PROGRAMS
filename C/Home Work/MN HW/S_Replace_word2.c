/* This code is not perfect
please don't give any worng input
it may give you a worng output or crash based on your wrong input
I will make it perfect in future, until then please take care. THANK YOU
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char text[5000], word[200], temp[5000], nword[200], ntext[5000], oldtext[5000];
    int count1 = 0, count2 = 0, wlen, Tlen, i, j;
    int k, l, m, n;
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin); // reading input and geting rid of the newline
    text[strcspn(text, "\n")] = '\0'; // because it giving a extra 1 length but it happens only on fgets()
    strcpy(oldtext, text);
    Tlen = strlen(text);
    do
    {
        printf("\nEnter the word you want to replace: ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = '\0';
        wlen = strlen(word);
        printf("Enter the word you want to replace that with: ");
        fgets(nword, sizeof(nword), stdin);
        nword[strcspn(nword, "\n")] = '\0';
        for (i = 0; i < Tlen; i++)
        {
            for (j = 0; j < wlen; j++)
            {
                if (text[j + i] == word[j])
                {
                    count1++; // counting occurrence of every single character
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
        printf("\nOld Sentence was: %s", oldtext);
        printf("\n\nNew Sentence is: %s\n\n", ntext);
        printf("want to change something else in the text....\n press 'Y' to continue anything else to exit:");
        char cd;
        scanf("%c", &cd);
        getchar();
        if (cd == 'y' || cd == 'Y')
            continue;
        else
            break;
    } while (TRUE);
    return 0;
}