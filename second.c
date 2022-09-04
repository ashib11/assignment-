#include<stdio.h>
int main(){
int a  = 7; 
for (int i = 1; i <= a; i++)
{
    for (int j = i; j < a; j++)
    {
        printf(" "); 
    }
    for (int k = 1; k <= (2*i-1); k++ )
    {
        printf("*"); 
    }
    printf("\n"); 
}
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j < i; j++)
    {
        printf(" "); 
    }
    for (int m = 1; m <=(2*a-(2*i-1)) ; m++)
    {
        printf("*");
    }
    
    printf("\n"); 
}


return 0;
}