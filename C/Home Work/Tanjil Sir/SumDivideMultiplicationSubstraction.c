#include <stdio.h>
int getsum(int, int, int, int);
int getsub(int, int);
float getmul(int, float);
void getdivision(int, float);
long int powr(int, int);

int main(void)
{
    int a, b, c, d, sum;
    printf("Enter four numbers to sum: ");
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    sum = getsum(a, b, c, d);
    printf("The sum is: %d\n", sum);
    printf("Enter two numbers to substract: ");
    scanf(" %d %d", &a, &b);
    int sub = getsub(a, b);
    printf("The substract is: %d\n", sub);
    printf("Enter two number to multiply(first int second float): ");
    float x;

    scanf(" %d %f", &a, &x);
    printf("The Multiplication is : %.3f\n", getmul(a, x));
    printf("Enter two numbers to divide: ");
    scanf(" %d %f", &a, &x);
    getdivision(a, x);
    printf("Enter base and power to get power of that:");
    scanf("%d %d", &a, &b);

    long int ans = powr(a, b);
    printf("The answer is : %ld", ans);

    return 0;
}

int getsum(int a, int b, int c, int d)
{
    int ans = a + b + c + d;
    return ans;
}

int getsub(int x, int y)
{
    return x - y;
}

float getmul(int x, float y)
{
    int mul;
    mul = x * y;
    return mul;
}

void getdivision(int x, float y)
{
    printf("Division is %.3f\n", x / y);
}
long int powr(int x, int y)
{
    long int ans = 1;
    while (y)
    {
        ans = ans * x;
        y--;
    }
    return ans;
}
