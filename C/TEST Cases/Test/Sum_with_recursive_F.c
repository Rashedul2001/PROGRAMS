#include <stdio.h>
int sum(int a);
int main() 
{
    int number,result;
    printf("Enter the number:");
    scanf("%d",&number);
    result=sum(number);
    printf("sum is %d", result);


}

int sum(int a)
{
    
    if (a!=0)
    return a + sum(a-1);
    else 
    return a;
}