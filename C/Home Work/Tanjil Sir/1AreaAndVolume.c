/*
Name: MD Rashedul Hasan
ID Number: 105
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159265

int main()
{
    int choice;
    char ch;
    float r, area, height, base, a, l, w, b;
start:
    printf("\nFor Which shape do you want to find out the area?\n");
    printf("1.Circle\n2.Triangle\n3.Square\n4.rectangle\n5.Parallelogram\n6.Trapezium\n7.Cylinder\n8.Sphere\n9.Cone\n10.Cube\n\nEnter Your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    c1:
        printf("\nEnter the Radius of the circle:");
        scanf("%f", &r);
        if (r >= 0)
        {
            area = PI * (r * r);
            printf("The area of Circle is:%.4f", area);
            printf("\n\nWant to do it again?\npress 'Y' for yes or 'M' for main list or anything else to exit the program:\n");
            scanf(" %c", &ch); // I could use ch=getchar();insted but it is not working I don't know why
            if (ch == 'Y' || ch == 'y')
                goto c1;
            else if (ch == 'M' || ch == 'm')
                goto start;
            else

                goto end;
        }
        else
            printf("\nEnter valid number....");
        goto c1;
        break;
    case 2:
    c2:
        printf("\nEnter the base and height of the triangle:");
        scanf("%f %f", &base, &height);
        if (height >= 0 && base >= 0)
        {
            area = 0.5 * base * height;
            printf("The area of triangle is:%.4f", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c2;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter valid number....");
        goto c2;
        break;
    case 3:
    c3:
        printf("\nEnter the length of side of the Square:");
        scanf("%f", &a);
        if (a >= 0)
        {
            area = a * a;
            printf("The area of the Square is:%.4f", area);
            printf("\n\nWant to do it again?\npress 'Y' for yes or 'M' for main list or anything else to exit the program:");
            scanf(" %c", &ch); // I could use ch=getchar();insted but it is not working I don't know why
            if (ch == 'Y' || ch == 'y')
                goto c3;
            else if (ch == 'M' || ch == 'm')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter positive number....");
        goto c3;
        break;
    case 4:
    c4:
        printf("\nEnter the length of the Rectangle:");
        scanf("%f", &l);
        printf("Enter the width of the Rectangle:");
        scanf("%f", &w);
        if ((l >= 0) && (w >= 0))
        {
            area = l * w;
            printf("The area of Rectangle is:%.4f.", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c4;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter Positive number....");
        goto c4;
        break;
    case 5:
    c5:
        printf("\nEnter the base and vertical height of the Parallelogram:");
        scanf("%f %f", &base, &height);
        if ((height >= 0) && (base >= 0))
        {
            area = base * height;
            printf("The area of Parallelogram is:%.4f.", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c5;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter Positive number....");
        goto c5;
        break;

    case 6:
    c6:
        printf("\nEnter the length of parallel sides separetly of the Trapizium:");
        scanf("%f %f", &a, &b);
        printf("Enter the height of the Trapizium:");
        scanf("%f", &height);
        if ((a >= 0) && (b >= 0) && (height >= 0))
        {
            area = 0.5 * (a + b) * height;
            printf("The area of the Trapizium is:%.4f.", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c6;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter Positive number....");
        goto c6;
        break;

    case 7:
    c7:
        printf("\nEnter the radius of the circular base and the height of the Cylinder:");
        scanf("%f %f", &r, &height);
        if ((r >= 0) && (height >= 0))
        {
            area = 2.0 * PI * r * (r + height);
            printf("The area of the Cylinder is:%.4f.", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c7;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter Positive number....");
        goto c7;
        break;
    case 8:
    c8:
        printf("\nEnter the Radius of the Sphere:");
        scanf("%f", &r);
        if (r >= 0)
        {
            area = 4.0 * PI * r * r;
            printf("The area of Sphere is:%.4f", area);
            printf("\n\nWant to do it again?\npress 'Y' for yes or 'M' for main list or anything else to exit the program:");
            scanf(" %c", &ch); // I could use ch=getchar();insted but it is not working I don't know why
            if (ch == 'Y' || ch == 'y')
                goto c8;
            else if (ch == 'M' || ch == 'm')
                goto start;
            else
                goto end;
        }
        else
            printf("\nEnter positive number....");
        goto c8;
        break;
    case 9:
    c9:
        printf("\nEnter the radius of the circular base and the slant height of the Cone:");
        scanf("%f %f", &r, &height);
        if ((r >= 0) && (height >= 0))
        {
            area = PI * r * (r + sqrt(height * height + r * r));
            printf("The area of the Cone is:%.4f.", area);
            printf("\n\nwant to do it again?\npress Y for yes or 'M' for Main list or anything to exit the program:");
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
                goto c9;
            else if (ch == 'm' || ch == 'M')
                goto start;
            else
                goto end;
        }
        else
            printf("Enter Positive number....");
        goto c9;
        break;
    case 10:
    c10:
        printf("\nEnter the length ot the edge of the Cube:");
        scanf("%f", &a);
        if (a >= 0)
        {
            area = 6.0 * a * a;
            printf("The area of Cube is:%.4f", area);
            printf("\n\nWant to do it again?\npress 'Y' for yes or 'M' for main list or anything else to exit the program:");
            scanf(" %c", &ch); // I could use ch=getchar();insted but it is not working I don't know why
            if (ch == 'Y' || ch == 'y')
                goto c10;
            else if (ch == 'M' || ch == 'm')
                goto start;
            else
                goto end;
        }
        else
            printf("\nEnter positive number....");
        goto c10;
        break;

    default:
    {
        printf("\n\t\tEnter valid choice.......");
        goto start;
    }
    break;
    }
end:
    return 0;
}
