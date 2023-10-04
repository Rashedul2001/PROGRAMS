#include <stdio.h>
int main ()
{
    int i, j,k, num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for (i = 0; i <num;i++)
    {
        for ( j=0 ; j<i;j++ )
        {
            printf("*");
            
        }
        printf("\n");


    }
}