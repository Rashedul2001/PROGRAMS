#include <stdio.h>
main() 
{
    
    int num, last=0,rem;
    printf("Enter number:");
    scanf("%d", &num);
    while (num!=0)
    {
     rem=num%10;
    num=num/10;
     last=last*10+rem;
     }
  printf("reverse is %d",last);

}