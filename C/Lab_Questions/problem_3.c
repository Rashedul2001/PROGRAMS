#include <stdio.h>

int main(void)
{
    float a, b, area, perimeter;
    printf("Enter the Base and Hight of the rectangle: ");
    scanf("%f %f", &a, &b);
    area = a * b;
    perimeter = 2 * (a + b);
    printf("Area of the rectangle is : %.3f and perimeter is: %.3f\n", area, perimeter);

    return 0;
}