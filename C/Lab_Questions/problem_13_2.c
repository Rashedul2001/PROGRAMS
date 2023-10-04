#include <stdio.h>

int main(void)
{
    int a, b, max, LCM;
    printf("Please Enter two positve integers to Find LMC: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    for (int i = max;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            LCM = i;
            break;
        }
    }
    printf("The LMC of %d and %d is %d", a, b, LCM);
    return 0;
}