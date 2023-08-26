#include<stdio.h>
int main()
{
    int num,last=0,rem,old_num;
    printf("Enter a number to check:");
    scanf("%d", &num);
    old_num=num;
    while (num!=0){
        rem=num%10;
        last=last*10+rem;
        num=num/10;
 }
if (old_num==last)
printf("number is palindrome");
else 
printf("number is not palindrome");



}