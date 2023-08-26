// find and count all the vowel, consonant and digit in a String
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[1024], ch;
    int vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;

    printf("Enter your String:\n");
    gets(string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] = tolower(string[i]);

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
            vowels++;
        else if (string[i] >= 'a' && string[i] <= 'z')
            consonants++;
        else if (string[i] >= '0' && string[i] <= '9')
            digits++;
        else if (string[i] == ' ')
            spaces++;
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nWhite spaces: %d", spaces);

    getch();
    return 0;
}