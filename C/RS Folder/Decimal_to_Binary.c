#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int dec, rem, temp;
    long long int bin;
    printf("Enter positive number to convert(Enter -1 to terminate):\n");
    while (1==1)
    {
        scanf("%d", &dec);
        bin = 0;
        if (dec != -1)
        {
            temp = dec;
            for (int i = 1; temp!=0; i *= 10)
            {
                rem = temp % 2;
                temp /= 2;
                bin += rem * i;
            }
            printf("Decimal %d == Binary %lld\n\n", dec, bin);
        }
        else
            break;
    }

    return 0;
}
