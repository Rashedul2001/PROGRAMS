#include <stdio.h>
#include <math.h>
int convert(unsigned long long int a);
int main(int argc, char const *argv[])
{
    unsigned long long int bin, temp;
    int i, rem, dec;
    char x;

    printf("Enter the Binary number you want to convert:(entering \"8\" will terminate the program)\n");

    while (scanf("%llu", &bin) && bin != 8)
        printf("The Decimal of %llu is %d\n", bin, convert(bin));

    return 0;
}
int convert(unsigned long long int bin)
{
    int i = 0, rem, dec = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
