//take two sorted arrays from the users as input and merge them into a single sorted.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);
    int mergedArray[2 * n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++) 
    scanf("%d", &mergedArray[i]);
    printf("Enter the elements");
    for (int i = n; i < 2 * n; i++) 
    scanf("%d", &mergedArray[i]);
    for (int i = 0; i < 2 * n; i++) {
    for (int j = i + 1; j < 2 * n; j++) {
    if (mergedArray[i] > mergedArray[j]) {
    int temp = mergedArray[i];
    mergedArray[i] = mergedArray[j];
    mergedArray[j] = temp;
    }
    }
    }
    printf("Merged and sorted array:\n");
    for (int i = 0; i < 2 * n; i++)\
    printf("%d ", mergedArray[i]);
    return 0;
    }

