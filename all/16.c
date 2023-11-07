//create an array to store all the prime numbers up to n take n as a input from the users.

#include <stdio.h>

	int main() {
       int n;

    printf("Enter the number ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements");
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element");
        scanf("%d", &arr[i]);
    }

    printf("Enter elements");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
	}

