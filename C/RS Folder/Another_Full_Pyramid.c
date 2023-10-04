#include<stdio.h>
int main()
{
   int i,j,row,star,k;
   printf("Enter the number of row:");
   scanf("%d",&row);
   for(i=row,k=1;i>=1;i--,k++)
   {
      for(j=i;j>=1;j--)
      {
         printf(" ");
      }
      for(star=1; star<=k; star++)
      {
         printf("* ");
      }
      printf("\n");

    }
}