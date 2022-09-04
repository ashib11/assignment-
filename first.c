#include <stdio.h>
int main()
{
    int a = 5;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
       
    }
    for (int i = 1; i <= a; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            printf(" "); 
        }
        
        for (int j = a; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}