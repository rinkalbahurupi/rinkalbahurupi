// give an array of integers change the value of all odd indexed elements to its second multiple and increament all even indexed vale by 10.
#include <stdio.h>

int main() 
    {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
    if (i % 2 == 0) 
    {
    arr[i] += 10;
    }
    else 
    {
    arr[i] *= 2;
    }
    }
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) 
    {
    printf("%d ", arr[i]);
    }
    return 0;
    }

