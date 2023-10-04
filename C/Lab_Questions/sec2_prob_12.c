#include <stdio.h>

int main(void)
{
    FILE *inptr;
    char data[1024], data2[1024];
    printf("Please Enter your data: ");
    fgets(data, sizeof(data), stdin);
    inptr = fopen("INPUT.txt", "w");
    if (inptr != NULL)
    {
        printf("File created Successfully\n");
    }
    else
    {
        printf("Error. couldn't create the necessary file.");
        return 0;
    }

    // fprintf(inptr, "%s", data);//fprintf
    fputs(data, inptr); // fputs
    fclose(inptr);
    inptr = fopen("INPUT.txt", "r");
    if (inptr == NULL)
    {
        printf("Error. couldn't open the necessary file.");
        return 0;
    }
    pirntf("\n Now displaying the data from INPUT.txt file.\n");
    fscanf(inptr, "%[^\n]s", data2); // fscanf
    // fgets(data2, sizeof(data2), inptr);// fgets
    printf("%s", data2);
    fclose(inptr);

    return 0;
}