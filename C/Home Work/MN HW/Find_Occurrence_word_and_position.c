#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0

int main()
{
    char text[5048], word[2048];
    int tlen, wlen, i, j;
    printf("Enter the Text:");
    fgets(text, sizeof(text), stdin);
    tlen = strlen(text);
    do
    {
        int position[100] = {0}, count1 = 0, count2 = 0;
        printf("Enter the word: ");
        scanf("%[^\n]", word);
        wlen = strlen(word);
        for (i = 0; i < tlen; i++)
        {
            for (j = 0; j < wlen; j++)
            {
                if (text[j + i] == word[j])
                {
                    count1++;
                }
            }
            if (count1 == wlen)
            {
                count2++;
                position[count2] = i;
            }
            count1 = 0;
        }
        printf("\nOccurrence of %s in the text: %d\n ", word, count2);
        printf("Position of the  words are: ");
        if (count2 == 0)
            printf("NULL");

        for (int t = 1; t <= count2; t++)
        {
            printf("%d ", position[t]);
        }
        printf("\nWant to Find more words(Y to continue anything else to exit):");
        char ff;
        scanf(" %c", &ff);
        getchar();
        if (ff == 'Y' || ff == 'y')
            continue;
        else
            break;
    } while (TRUE);

    return 0;
}