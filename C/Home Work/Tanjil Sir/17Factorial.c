#include<stdio.h>
main()
{
    int num,i;
    double fact=1;
    printf("Enter positive number:");
    scanf("%d",&num);
    i=num;
    while(i!=0)
    {
        fact=fact*i;
        i--;

    }
    printf("factorial of %d is %.3lf",num,fact);

}