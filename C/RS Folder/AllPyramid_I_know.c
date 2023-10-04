#include <conio.h>
#include <stdio.h>
int main()
{
   int i, j, row, num, temp, space, star, k;
   char ch, alphabet = 'A';
   printf("Enter the number of rows:\n");
   scanf("%d", &row);

   printf("Enter the last alphabet you want to print in the last row(UPPERCASE):\n");
   scanf(" %c", &ch);
   printf("\n\n\n\nHalfpyradmid:\n--------------------------------\n");
   for (i = 1; i <= row; i++)
   {
      for (j = 0; j < i; j++)
      {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n\n\n\npyradmid of numbers:\n--------------------------------\n");
   for (i = 1, num = 1; i <= row; i++, num++)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%6d ", num);
      }
      printf("\n");
   }
   printf("\n\n\n\npyradmid of Alphabet:\n--------------------------------\n");
   for (i = 0; i <= ch - 'A'; i++)
   {

      for (j = 0; j <= i; j++)
      {
         printf("%c ", alphabet);
      }
      alphabet++;
      printf("\n");
   }
   printf("\n\n\n\nInverted half pyradmid:\n--------------------------------\n");
   for (i = row; i >= 1; i--)
   {
      for (j = i; j >= 1; j--)
      {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n\n\n\nInverted half pyradmid of Numbers:\n--------------------------------\n");
   for (i = row; i >= 1; --i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("%3d ", j);
      }
      printf("\n\v");
   }
   printf("\n\n\n\nFull Pyradmid:\n--------------------------------\n");

   for (i = 1, temp = row; i <= row; i++, temp--)
   {
      // space= temp*2-2;
      // while(space>0)
      // {
      //    printf(" ");
      //    space--;
      // }
      for (space = temp * 2 - 2; space > 0; space--)
      {
         printf(" ");
      }
      for (star = i * 2 - 1; star > 0; star--)
      {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n\n\n\nAnother Full Pyradmid:\n--------------------------------\n");
   for (i = row, k = 1; i >= 1; i--, k++)
   {
      for (j = i; j >= 1; j--)
      {
         printf(" ");
      }
      for (star = 1; star <= k; star++)
      {
         printf("* ");
      }
      printf("\n");
   }

   getch();

   return 0;
}