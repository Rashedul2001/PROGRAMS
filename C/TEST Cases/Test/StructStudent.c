// incomplete

#include <stdio.h>

struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
void main()
{
    int i;
    struct marks student[3] = {{45, 67, 81, 0}, {75, 53, 69, 0}, {57, 36, 71, 0}};
    struct marks total;
    for (i = 0; i < 2; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
    }
}