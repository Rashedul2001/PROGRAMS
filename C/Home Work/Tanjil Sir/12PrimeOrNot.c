#include <stdio.h>
main()
{
    int num, check=0;
    printf("enter a positive number to check:");
    scanf("%d", &num);
    if (num==0||num==1)//because 0 and 1 are not prime numbers
check=1;// its for not prime detection
else
    {
        for (int i=2; i<=num/2; i++)
        {
            if (num%i==0)
            {
            check=1;
            break;
        
     }
        

        }
       

    }
    if(check==0)
    printf("The number %d is a prime number",num);
    else
    printf("the number %d is not a prime number",num);

}