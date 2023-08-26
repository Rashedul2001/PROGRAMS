#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, temp, pw, sum = 0;
    printf("Please Enter a Number:");
    scanf("%d", &num);
    temp = num;
    pw = (num > 0) ? (log10(num) + 1) : 0;
    while (temp)
    {
        sum += pow(temp % 10, pw);
        temp /= 10;
    }
    if (sum == num)
        printf("The number is an Armstrong Number. ");
    else
        printf("The number is not an Armstrong Number. ");
}