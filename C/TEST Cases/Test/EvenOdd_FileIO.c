#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, n, i;
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("DATA.txt", "r");
    fp2 = fopen("ODD.txt", "w");
    fp3 = fopen("EVEN.txt", "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File could not oenp!!");
        exit(0);
    }
    while (fscanf(fp1, "%d", &a) != EOF)
    {
        if (a % 2 != 0)
            putw(a, fp2);
        else
            putw(a, fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp2 = fopen("ODD.txt", "r");
    fp3 = fopen("EVEN.txt", "r");
    if (fp2 == NULL || fp3 == NULL)
    {
        printf("File could not open!!\n");
        exit(0);
    }
    printf("Contents of ODD file:\n");

    while ((a = getw(fp2)) != EOF)
        printf(" %d", a);
    printf("\nContents of Even file:\n");
    while ((a = getw(fp3)) != EOF)
        printf(" %d", a);
    fclose(fp2);
    fclose(fp3);
    return 0;
}