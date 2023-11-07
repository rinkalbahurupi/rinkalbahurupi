//construct a flowchart find the minimum value out of all the elements in the array.
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
    int min = arr[0];
    for (int i = 1; i < n; i++) 
    {
    if (min > arr[i]) 
    {
    min = arr[i];
    }
    }
    printf("Minimum value in the array: %d\n", min); 

    return 0;
}

