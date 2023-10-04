#include <stdio.h>
#include <conio.h>

struct class
{
    int number;
    char name[30];
    float marks;
};
int main()
{
    int x;
    struct class student1 = {111, "Rao", 72.50};
    struct class student2 = {222, "john", 67.80};
    struct class student3;
    student3 = student2;
    x = ((student3.number == student2.number) && (student3.marks == student2.marks)) ? 1 : 0;
    if (x == 1) // just for fun I would like to add a user define function
    {
        printf("\nStudent2 and Student3 are the same.\n\n");
        printf("%d %s %f\n", student3.number, student3.name, student3.marks);
    }
    else
        printf("\nStudent2 and Student3 are not the same.\n\n");
    getch();
    return 0;
}
