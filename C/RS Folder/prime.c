#include <stdio.h>
int check_prime(int n);
int main()
{
    int num, i, count = 0;
    printf("Enter a positive number:\n");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        if (check_prime(i) == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nThere are %d prime numbers\n", count);

    return 0;
}
int check_prime(int b) // trying new name for input value which doesn't matter
{
    int i, flag = 1;
    for (i = 2; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}