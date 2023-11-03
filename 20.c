//create an array to store the factorial given n numbers.

#include <stdio.h>

int main() 
    {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int f[n]; 
    for (int i = 0; i < n; i++) 
    {
    f[i] = 1;
    for (int j = 1; j <= i + 1; j++) 
    {
    f[i] *= j;
    }
    }
    printf("%d\n", n);
    for (int i = 0; i < n; i++) 
    {
    printf("%d! = %d\n", i + 1, f[i]);
    }
    return 0;
    }

