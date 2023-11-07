//create an array to store all factors of a numbers take input from the users.

#include <stdio.h>

	int main() 
	{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n]; 
    int p = 0; 
    for (int i = 1; i <= n; i++) 
    {
    if (n % i == 0) 
    {
    arr[p] = i;
    p++;
    }
    }
    printf("%d\n", n);
    for (int i = 0; i < p; i++) 
    {
    printf("%d\n", arr[i]);
    }
    return 0;
    }

