// becrowd 1021 **** it's not working fix this

#include <stdio.h>

int main(void)
{
    int count, note[] = {100, 50, 20, 10, 5, 2};
    double coin[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01}, N;
    scanf(" %lf", &N);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        count = 0;
        while (N - note[i] >= 0)
        {
            N -= note[i];
            count++;
        }
        printf("%d nota(s) de R$ %d.00\n", count, note[i]);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        count = 0;
        while (N - coin[i] >= 0)
        {
            N -= coin[i];
            count++;
        }
        printf("%d moeda(s) de R$ %.2lf\n", count, coin[i]);
    }

    return 0;
}