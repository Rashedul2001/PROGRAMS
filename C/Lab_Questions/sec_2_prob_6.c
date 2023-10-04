#include <stdio.h>

int main(void)
{

    int MatrixA[3][3], MatrixB[3][3], Mul[3][3] = {0};
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
            for (int k = 0; k < 3; k++)
            {
                Mul[i][j] += MatrixA[i][k] * MatrixB[k][j];
            }
        }
    }
    printf("MUltiplication of A and B is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }
}