/*Program to generate the sum of 1/1 + 1/2 + 1/3 + 1/4 +..... + 1/n

*/

#include <stdio.h>
#include <conio.h>
int main()
{
    float sum = 0;
    int n;
    printf("Enter the value of N:");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        sum += 1.0/ i;
    }
    printf("\nSum is %.3f\n", sum);
    getch();
    return 0;
}