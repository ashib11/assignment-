#include <stdio.h>

int main()
{
    int n, temp, space;

    scanf("%d", &n);

    space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) != 0)
        {
            temp = i;

            while (temp)
            {
                printf("#");
                temp--;
            }

            temp = space;

            while (temp)
            {
                printf(" ");
                temp--;
            }

            space = space - 2;

            temp = i;

            while (temp)
            {
                printf("&");
                temp--;
            }
        }
        else
        {
            temp = i;

            while (temp)
            {
                printf("&");
                temp--;
            }

            temp = space;

            while (temp)
            {
                printf(" ");
                temp--;
            }

            space = space - 2;

            temp = i;

            while (temp)
            {
                printf("#");
                temp--;
            }
        }

        printf("\n");
    }

    return 0;
}