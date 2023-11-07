//learn these sorting algorithms and apply then to an unsorted array 1) slection sort 2) insertion sort.3) bubble sort.
#include <stdio.h>
int main()
{
int n; 
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    }

    int main()
     {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    printArray(arr, n);

    // Selection Sort
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex])
             {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("Array after Selection Sort: ");
    printArray(arr, n);

    // Insertion Sort
    for (int i = 1; i < n; i++)
     {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Array after Insertion Sort: ");
    printArray(arr, n);

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after Bubble Sort: ");
    printArray(arr, n);
    
    return 0;
}

