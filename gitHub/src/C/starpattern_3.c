#include <stdio.h>

int main(){

int n, i, j;

printf("enter value of n\n");
scanf("%d", &n);

for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= n; j++)
    {
        if (j<=i)
        {
            printf("*");
        }else{
            printf(" ");
        }
        
    }
    printf("\n");
}


    return 0;
}