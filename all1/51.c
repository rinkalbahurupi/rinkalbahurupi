// find the second largest elements in the array .
#include <stdio.h>

int main()
 {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
    printf("Enter element ");
    scanf("%d", &arr[i]);
    }
    int a = arr[0];
    int b = arr[0];
    for (int i = 1; i < n; i++) 
    {
    if (arr[i] > a) 
    {
     b = a;
     a = arr[i];
   } else if (arr[i] > b) 
   {
   b = arr[i];
   }
   }

    printf("The second largest element is: %d\n", b);

    return 0;
}


