#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float *point, sum = 0;
    int n;
    printf("Enter the number of elements to sum\n");
    scanf("%d", &n);
    point = (float *)malloc(n * sizeof(float));
    printf("Enter the Elements to sum\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &point[i]);
        sum += point[i];
    }
    printf("\nSum is %.3f", sum);
    return 0;
}