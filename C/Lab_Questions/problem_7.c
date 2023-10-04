#include <stdio.h>
#include <math.h>

int main(void)
{
    // char Quadratic_Equation[] = "***********************\nIn algebra, a quadratic equation (from Latin quadratus 'square')\n is any equation that can be rearranged in standard form as{displaystyle ax^{2}+bx+c=0}\n{displaystyle ax^{2}+bx+c=0} where x represents an unknown, and a, b, and c represent known numbers,\n where a != 0. (If a = 0 (and b != 0) then the equation is linear, not quadratic,\n as there is no {displaystyle ax^{2}}ax^2 term.)\n****************************\n";
    // printf("%s", Quadratic_Equation);
    float a, b, c, root1, root2, determinant;

    printf("\n Please Enter the value of a,b and c respectively:\n");
    scanf("%f %f %f", &a, &b, &c);
    determinant = (b * b) - 4 * a * c;
    if (determinant > 0)
    {
        root1 = ((-b) + sqrt(determinant)) / (2 * a);
        root2 = ((-b) - sqrt(determinant)) / (2 * a);
    }
    else if (determinant == 0)
    {
        root1 = root2 = (-b) / (2 * a);
    }
    else
    {
        float imagPart = sqrt(-determinant) / (2 * a), realPart = (-b) / (2 * a);

        printf("roots of Quadratic equation are\n");
        printf("root1= %.3f+%.3fi\nroot2= %.3f-%.3fi", realPart, imagPart, realPart, imagPart);

        return 0;
    }
    printf("root1= %.3f\nroot2=%.3f", root1, root2);

    return 0;
}