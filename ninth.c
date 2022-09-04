#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= (a / 2) + 1; i++)
    {
        for (int k = i; k < (2 * i - 1); k++)
        {
            printf("  ");
        }

        for (int j = (2 * i - 1); j <= a; j++)
        {
            printf("@ ");
        }
        printf("\n");
    }
    for (int i = 1; i <= (a / 2); i++)
    {
        for (int k = i; k < (a/2); k++)
        {
            printf("  "); 
        }
        

        for (int j = 1; j <= (2*i+1) ; j++)
        {
            printf("@ ");
        }
        printf("\n");
    }
    return 0;
}