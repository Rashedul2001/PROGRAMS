#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strreplace(const char *s, const char *w1, const char *w2)
{
    size_t len = strlen(s);
    size_t len1 = strlen(w1);
    size_t len2 = strlen(w2);
    size_t size = len + 1;
    const char *p, *q;
    char *result, *r;

    if (len >= len1 && len1 != len2 && len1 != 0)
    {
        // count the number of occurrences of w1 in s
        for (p = s; (p = strstr(p, w1)) != NULL; p += len1)
            size = size + len2 - len1;
    }
    r = result = malloc(size);
    if (result == NULL)
        return NULL;
    if (len1 != 0)
    { /* don't replace the empty string */
        for (p = s; (q = strstr(p, w1)) != NULL; p = q + len1)
        {
            memcpy(r, p, q - p);
            r += q - p;
            memcpy(r, w2, len2);
            r += len2;
        }
    }
    strcpy(r, p);
    return result;
}

#define DIM 1000

int main()
{
    char phrase[DIM], word[DIM], word2[DIM];
    char *result;

    printf("Write a sentence\n>> ");
    if (!fgets(phrase, sizeof(phrase), stdin))
        return 1;
    phrase[strcspn(phrase, "\n")] = '\0'; // strip the newline if any

    printf("Enter the word you want to replace in the sentence\n>> ");
    if (!fgets(word, sizeof(word), stdin))
        return 1;
    word[strcspn(word, "\n")] = '\0'; // strip the newline if any

    printf("What do you want to replace it with?\n>> ");
    if (!fgets(word2, sizeof(word2), stdin))
        return 1;
    word2[strcspn(word2, "\n")] = '\0'; // strip the newline if any

    result = strreplace(phrase, word, word2);
    if (result == NULL)
    {
        printf("memory allocation failure\n");
        return 1;
    }
    printf("%s\n", result);
    free(result);
    return 0;
}