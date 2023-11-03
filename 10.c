#include <stdio.h>

int main() {
    int n, j;
    printf("Enter the number: ");
    scanf("%d", &j);

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    int k = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == j) {
            k = 1;
           
        }
    }

    if (k) {
        printf("Number exists in the array.\n");
    } else {
        printf("Number does not exist in the array.\n");
    }

    return 0;
}

