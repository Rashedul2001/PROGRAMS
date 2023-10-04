#include <stdio.h>
int sumR(int n);
int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("sum=%d \n", sumR(num));
    return 0;
}
int sumR(int n)
{
    if(n!=0)
    return n + sumR(n-1);
    else
    return n;
}