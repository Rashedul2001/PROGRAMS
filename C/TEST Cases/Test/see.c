#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
   char str1[3] = "I", str2[4] = " AM", str3[10] = " LEGEND", str4[50];
   strcat(str4, str1);
   strcat(str4, str2);
   strcat(str4, str3);
   puts(str4);
   getch();
   return 0;
}