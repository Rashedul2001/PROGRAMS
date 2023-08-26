#include <stdio.h> 
int main()
{
 int num,i=2,j,idc=1,count=0;
 printf("enter the last number ");
 scanf("%d", &num);
 printf("the prime numbers are: ");

 if (num<=1)
 printf("none");
 else
{
    while(i<=num)
    {
        for (int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                idc=0;
                break;
            }
        }

        if (idc==1)
        {
            printf("%d  ",i);
            count++;
        }


        i++;
    }
    printf("\nthe total number of prime numbers is %d ",count);

}

 
}