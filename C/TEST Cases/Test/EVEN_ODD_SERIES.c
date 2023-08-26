/*
Question:
Write a program to print the following sequence of numbers :
13 40 20 10 05 16 08 04 02 01
(If the number is odd use '3n+1'  &  for even number use 'n/2')
*/


#include <stdio.h>
int main()
{
 int a,b;
 scanf(" %d",&b);
 do{
    if (b&1)
        {
        a= (3*b)+1;
        printf("%d\n",a);
        b=a;
        }

    else
        {
        a= b/2;
        printf("%d\n",a);
        b=a;
        }
 }while(b!=1);
 return 0;
}