/* I will do this programe when I would learn to count the number of input 
then I will write this code to define N without taking any inputs*/
//it's not working

#include <stdio.h>
#define N 10
int main()
{
    int count;

    float sum = 0, average, number;
    printf("enter 10 number:");

    for (count = 0; count < N; count++)
    {
        scanf("%f", &number);
        sum = sum + number;
    }

    average = sum / N;
    printf("N=%d sum=%f average=%f", N, sum, average);

    return 0;
}
