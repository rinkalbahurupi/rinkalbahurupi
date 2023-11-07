// count the number of elements in given array grater than a given number .
    #include<stdio.h>
    int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int c = 0;
    for (int i = 0; i < n; i++) {
    if (arr[i] > x) {
    c++; 
    }
    }
    printf(" %d: %d\n", x, c);
    return 0;
    }

