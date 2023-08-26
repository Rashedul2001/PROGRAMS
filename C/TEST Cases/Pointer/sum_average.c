#include <stdio.h>
#include <conio.h>

void sum_average(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main(void)
{
    int a = 10, b = 20, sum;
    float avg;
    printf("Enter two int number to get sum and average:");
    scanf("%d %d", &a, &b);
    sum_average(a, b, &sum, &avg);
    printf("The sum and average are respectively %d and %.3f ", sum, avg);

    getch();
    return 0;
}