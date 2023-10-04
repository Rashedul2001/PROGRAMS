#include <stdio.h>

int main(void)
{
    int MatrixA[3][3], MatrixB[3][3], Sum[3][3];
    printf("Enter Matrix A by row to row:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]th Element:", i + 1, j + 1);
            scanf("%d", &MatrixA[i][j]);
        }
    }
    printf("Enter Matrix B by row to row:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]th Element:", i + 1, j + 1);
            scanf("%d", &MatrixB[i][j]);
        }
    }
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", MatrixA[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", MatrixB[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Sum[i][j] = MatrixA[i][j] + MatrixB[i][j];
        }
    }
    printf("Sum is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}