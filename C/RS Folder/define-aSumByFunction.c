#include <stdio.h>
 int sum(int a, int b);

int main()
{
   int i,X,Y;
   printf("Enter two interger number to sum:");
   scanf("%d %d",&X,&Y);

   i= sum(X,Y);
   printf("The sum of %d and %d is %d\n",X,Y, i);
   

}
int sum(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}