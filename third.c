#include<stdio.h>
int main(){
    int a = 5; 
    for (int i = 1; i <=a; i++)
    {
        for (int b = 1; b <=(i-1); b++)
        {
            printf("# "); 
        }
        
        for (int j = i; j <=i ; j++)
        {
            printf("$ "); 
        }
        for (int k = (i+1); k <=a; k++)
        {
            printf("@ "); 
        }
        
        printf("\n"); 
    }
    

return 0;
}