#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number to compare:");
    scanf(" %d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("\n%d is the bigest nyumber",a);
        else
        printf("\n%d is the greatest nyumber",c);

    }
    else if(b>c)
    printf("\n%d is the largest nyumber",b);
    else
    printf("\n%d is largest number",c);
}