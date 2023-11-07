//make a flowchART to print duplicate in an array

    #include <stdio.h>
    int main() 
    {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
    printf("Enter element");
    scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array: ");
    for (int i = 0; i < n; i++) 
    {
    for (int j = i + 1; j < n; j++) 
    {
    if (arr[i] == arr[j]) 
    {
    printf("%d ", arr[i]);
    }
    }
    }
    printf("\n");

    return 0;
    }

