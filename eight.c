#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    char a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                a[i][j] = '@';
            else
                a[i][j] = ' ';
        }
    }

    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
        a[i][j] = '@';

    a[n / 2][n / 2] = '?';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}