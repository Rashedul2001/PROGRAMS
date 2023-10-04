#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int n2, n1;
    printf("ENTER A NUMBER: ");
    if (scanf("%d", &n1) == 1) // checking if the input was correctly parsed
    {
        fp = fopen("text.txt", "w+"); // open to read and write
        if (fp == NULL)
        {
            printf("ERROR");
            exit(1);
        }
        putw(n1, fp); // write to the file

        rewind(fp); // go back to the beginning of the file

        n2 = getw(fp); // get the data

        printf("%d", n2);
        fclose(fp);
    }
    else
    {
        puts("Bad input");
    }
}