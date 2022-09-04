#include <stdio.h>
int main()
{
   
    int a = 9;
    for (int i = 1; i < a; i++)
    {

        for (int j = i; j < a; j++)
        {

            printf("# ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("  ");
        }
        for (int j = i; j < a; j++)
        {

            printf("# ");
        }
        printf("\n");
    }

    for (int i = a; i > 0; i--)
    {

        for (int j = i; j < a; j++)
        {

            printf("# ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("  ");
        }
        for (int k = i; k < a; k++)
        {

            printf("# ");
        }
        printf("\n");
    }

    return 0;
}