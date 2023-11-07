// write a program to create a array of 7 numbrs from the users and print them if the completed array consists of consecative numbers or not.

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
    int c = 1;
    for (int i = 1; i < n; i++) 
    {
    if (arr[i] != arr[i - 1] + 1) 
    {
    c= 0;
    }
    }
    if (c) 
    {
    printf("The array consists of consecutive numbers.\n");
    } else {
    printf("The array does not consist of consecutive numbers.\n");
    }
    return 0;
    }

