// take an array of the size n and a number k from the users as input and print the elements of an array in a roated with a gap of k .

#include<stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the array elements");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the  k: ");
    scanf("%d", &k);

    printf(" %d\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(i + k) % n]);
    }

    return 0;
}

