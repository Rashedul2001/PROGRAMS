#include <stdio.h>
#include<conio.h>
float power_f(float x, int power);
int main()
{
    float base, result;
    int power;
    printf("Enter the base and a postive power:");
    scanf("%f %d", &base, &power);
    result = power_f(base, power);
    printf("\n %.3f ^ %d = %.3f", base, power, result);
    getch();
    return 0;
}
float power_f(float base, int x)
{
    if (x != 0)
        return (base * power_f(base, x - 1));
    else
        return 1;
}