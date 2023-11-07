//find the differance between the sum of elements at even indices to the sum of elements at odd indices.
    #include<stdio.h>
    int main()
    {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    }
    int sume = 0, sumo = 0;
    for(int i = 0; i < n; i++)
     {
    if(i % 2 == 0) 
    {
    sume += arr[i];
    } 
    else 
    {
    sumo += arr[i];
    }
    }
    int diff = sume - sumo;
    printf("%d\n", diff);
    return 0;
    }

