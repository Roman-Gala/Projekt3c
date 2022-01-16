#include <stdio.h>
#include <stdlib.h>

void czytaj_kolumnami(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &a[j][i]);
    }
}

void pisz_wierszami(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int * wektor_parzysty(int n, int m, int a[n][m])
{
    int i, j, k = 0;
    static int c[20];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            if (i % 2 == 0 && j % 2 == 0)
            {
                c[k] = a[i][j];
                k++;
            }
    }
    return c;
}
