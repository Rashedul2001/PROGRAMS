#include <stdio.h>
int main()
{    
    int num;
    long rem,binary=0,i=1;
    printf("Enter the number to convert:");
    scanf("%d",&num);
    while(num!=0)
    { 
        rem=num%2;
        num/=2;
        binary=rem*i+binary;
        i=i*10;
    }
    printf("binary is %ld\n",binary);

    return 0;
}