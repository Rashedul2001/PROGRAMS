#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    FILE *even, *odd, *source;
    printf("creating the neccessary files>>>>>");
    even = fopen("Even.txt", "w");
    odd = fopen("Odd.txt", "w");
    source = fopen("Source.txt", "w");
    sleep(1);
    if (even == NULL || odd == NULL || source == NULL)
    {
        printf("couldn't Open the files..sorry");
        exit(0);
    }
    printf("Successfull....\nEnter numbers to determine which number are odd and which are even:exit(-1)>>\n");

    int input;
    scanf("%d", &input);
    putw(input, source);
    // for one case we could use fscanf(pointer name pointing a source file, "format specifer",destination variable)
    // to end scanning we can use while not EOF; means end of file
    while (input != -1)
    {
        putw(input, source);
        if (input % 2 == 0)
            putw(input, even);
        else
            putw(input, odd);
        scanf(" %d", &input);
    }
    fclose(source);
    fclose(even);
    fclose(odd);
    even = fopen("Even.txt", "r");
    odd = fopen("Odd.txt", "r");
    if (even == NULL || odd == NULL)
    {
        printf("couldn't Open the files..sorry");
        exit(0);
    }
    int output;
    printf("Printing the even numbers:");
    output = getw(even);
    while (output != EOF)
    {
        printf(" %d", output);
        output = getw(even);
    }
    fclose(even);
    printf("\nPrinting the odd numbers:");
    output = getw(odd);
    while (output != EOF)
    {
        printf(" %d", output);
        output = getw(odd);
    }
    fclose(odd);
    return 0;
}