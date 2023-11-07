// writre a program to create a array of 10 number from the users and count the number of odd and even number.

    #include <stdio.h>
    int main() 
    {
    int n, c = 0, s = 0; // Move the counters outside the loop
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++) 
    {
    printf("Enter the element: ");
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0) 
    {
    c = c + 1;
    } else 
    {
    s = s + 1;
    }
    }
    printf("Even numbers count is %d\n", c);
    printf("Odd numbers count is %d\n", s);
    return 0;
    }

