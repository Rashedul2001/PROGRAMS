#include<stdio.h>
void check_Prime();
int main()
{
    check_Prime();
    return 0;
}

void check_Prime()
{
    int num,i,flag=0;
    printf("Enter your number to check:");
    scanf("%d",&num);
    if(num==1|| num==0)
    flag=1;

    for(i=2; i<num/2; i++)
    {
        if(num%i==0)
        flag=1;
        break;
    }
    if(flag==1)
    printf("%d is not a prime number",num);
    else 
    printf("%d is a prime number",num);
}