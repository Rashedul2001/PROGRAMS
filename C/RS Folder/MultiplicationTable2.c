#include<stdio.h>
int main()
{
    int n, i,range;
    do{
    printf("Enter the number and the range for the multiplication table(positive):");
    scanf("%d %d", &n, &range);
    }while(range<=0||n<=0);
    for(i=1;i<=range;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }
    return 0;
    
}