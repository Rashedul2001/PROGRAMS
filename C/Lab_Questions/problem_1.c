#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, perimeter, area, sp;
    printf("Enter the Three sides length sperated by a space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    perimeter = a + b + c;
    sp = perimeter / 2;
    double temp = (sp * (sp - a) * (sp - b) * (sp - c));
    if (temp <= 0)
    {
        printf("It doesn't form a triangle.Please Enter correctly.");
        return 0;
    }
    else
    {
        area = sqrt(temp);
        printf("The area of the Triangle is:%.3lf\n", area);
        printf("The perimeter of the Triangle is: %.3lf\n", perimeter);
    }
    return 0;
}