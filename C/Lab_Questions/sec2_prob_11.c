
/*
struct Student_record
{
    char name[20];
    int roll;
    float mark;
}student1,student2,studen3;

#include<stdio.h>

int main(void)
{
    // struct Student_record student1, student2, student3;
    use
}
  */
/*
#include <stdio.h>
typedef struct Student_record
{
    char name[20];
    int roll;
    float mark;

} st;

int main(void)
{
    st student1, student2, student3;
}
 */

#include <stdio.h>
#include <stdlib.h>

struct Student_record
{
    char name[20];
    int roll;
    float mark;
};

#include <stdio.h>

int main(void)
{
    struct Student_record *ptr;
    ptr = (struct Student_record *)malloc(3 * sizeof(struct Student_record));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter student%d name: ", i + 1);
        gets((ptr + i)->name);
        // scanf("%[^\n]",&(ptr+i)->name);
        printf("Enter student%d roll: ", i + 1);
        scanf("%d", &(ptr + i)->roll);
        printf("Enter student%d mark: ", i + 1);
        scanf("%f", &(ptr + i)->mark);
        fflush(stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d student name: ", i + 1);
        puts((ptr + i)->name);
        printf("%d student roll: ", i + 1);
        printf("%d", (ptr + i)->roll);
        printf("\n%d student mark: ", i + 1);
        printf("%.3f\n", (ptr + i)->mark);
    }
    free(ptr);
    return 0;
}