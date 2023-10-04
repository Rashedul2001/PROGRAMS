#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[] = "Twinkle, twinkle, little star, How I wonder what you are! Up above the world so high, Like a diamond in the sky. Twinkle, twinkle, little star, How I wonder what you are! **** When the blazing sun is gone, When he nothing shines upon, Then you show your little light, Twinkle, twinkle, all the night. Twinkle, twinkle, little star, How I wonder what you are! **** Then the traveller in the dark, Thanks you for your tiny spark, He could not see which way to go, If you did not twinkle so. Twinkle, twinkle, little star, How I wonder what you are! **** In the dark blue sky you keep, And often through my curtains peep, For you never shut your eye, Till the sun is in the sky. Twinkle, twinkle, little star, How I wonder what you are! **** As your bright and tiny spark, Lights the traveller in the dark,— Though I know not what you are, Twinkle, twinkle, little star. Twinkle, twinkle, little star, How I wonder what you are! ";
    strlwr(string1);
    int vowel = 0, consonant = 0;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] > 96 && string1[i] < 123)
        {
            if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u')
                vowel++;
            else
                consonant++;
        }
    }
    printf("There are %d vowels and %d consonants in the string.", vowel, consonant);
}