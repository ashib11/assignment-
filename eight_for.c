#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int b = n;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = i; j < (2 * i - 1); j++)
        {
            printf(" ");
        }
        for (int k = i; k <= n; k++)
        {
            if (k == i)
            {
                printf(" @");
            }
            if (k == b)
            {
                printf("@");
                b--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        count++;
    }

    for (int i = n/2; i >= 1; i--)
    {
        // outer spcae
        int a = 1; 
        for (int j = i; j < (2 * i - 1); j++)
        {
            printf(" ");
        }
        for (int k = i; k <= n; k++)
        {
            

            if (k == a)
            {
                printf("@");
                a--; 
            }
            if (k == b)
            {
                printf("@ ");
                b--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}