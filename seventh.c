#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n); 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0 && j == (n / 2 + 1))
            {
                printf("  ");
            }
            else if (i > 1 && i<n && i % 2 != 0 && (j%2==0))
            {
                printf("  ");
            }

            else
                printf("@ ");
        }
        printf("\n");
    }

    return 0;
}