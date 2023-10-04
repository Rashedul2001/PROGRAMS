#include<stdio.h>
int main()
{
    int i,ch,n,sum=0,count=1;
    printf("1 is for==== 1+2+3+4+5+6...+n\n 2 is for====1^2+2^2+3^2+4^2+5^2+......n^2\nEnter your choice:");
    scanf("%d",&ch);
    if (ch ==1)
    {
        printf("enter last position:");
        scanf("%d",&n);
        for (i=0; i<n; i++)
        {
            sum = sum + count;
            count++;

        }
            printf("The sum is: %d\n",sum);

    }
    else if(ch ==2)
    {
        printf("Enter the last position:");
        scanf("%d",&n);
        for (i=0; i<n; i++)
        {
            sum =sum+ count*count;
            count++;

        }
        printf("The sum is %d",sum);
    }

}