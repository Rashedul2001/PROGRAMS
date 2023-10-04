#include <stdio.h>

int main(void)
{
    int i, T, A, B, C, K;
    int avarage;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &A, &B, &C, &K);
        if (((A + B + C) % 3) != 0)
        {
            printf("Case %d: Fight\n", i + 1);
        }
        else
        {
            avarage = (A + B + C) / 3;

            if ((A - avarage) % K != 0 || (B - avarage) % K != 0 || (C - avarage) % K != 0)
                printf("Case %d: Fight\n", i + 1);
            else
                printf("Case %d: Peaceful\n", i + 1);
        }
    }

    return 0;
}
