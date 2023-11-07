/*
* * * * *
*
*
*
* * * * *
        * 
        *
        *
* * * * *
*/
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
    for (int j = 1; j <= n; j++) 
    {
    if (i == 1 || j == 1  || i == n) 
    {
    printf("* ");
    } 
    else 
    {
    printf("  ");
    }
    }
    printf("\n");
    }
    

for (i = 1; i <= n-1; i++) 
    {
    for (int j = 1; j <= n; j++) 
    {
    if ( j == n ) 
    {
    printf("* ");
    } 
    else 
    {
    printf("  ");
    }
    }
    printf("\n");
    }
    for(int i=1;i<=1;i++)
    {
    for(int j=1;j<=n;j++)
    {
  
    printf("* ");
    }
    }
    return 0;
    }


