/*C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers*/
#include <stdio.h>
int check_prime(int n);
int main()
{
    int num, i, flag = 0;
    printf("Enter a positive number:");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (check_prime(i) == 1)
        {
            if (check_prime(num - i) == 1)
            {
                printf("%d= %d + %d\n", num, i, num - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", num);
    return 0;
}
int check_prime(int n)
{
    int check = 1, i;
    if (n == 0 || n == 1)
        check = 0;
    else
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }
    return check;
}