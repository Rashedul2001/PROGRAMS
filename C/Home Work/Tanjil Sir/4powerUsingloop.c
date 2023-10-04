#include<stdio.h>
main()
{
    float x, y=1,n;
    printf("Enter the base and power: ");
    scanf("%f %f", &x, &n);
    while(n>0)
    {
        y=x*y;
        n--;

    }
    printf("%f",y);
}