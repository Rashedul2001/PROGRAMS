#include<stdio.h>
int main()
{
    int j,i;
    char ch,alphabet='A';
    printf("Enter the last alphabet you want to print in the last row(UPPERCASE):");
    scanf("%c",&ch);
    for(i=0; i<=ch-'A';i++)
    {
    
     for(j=0;j<=i;j++)
     {
        printf(" %c",alphabet);
     }
     alphabet++;
     printf("\n");

    }
}