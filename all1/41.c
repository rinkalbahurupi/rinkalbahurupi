//take two sorted arrays from the users as input and find the union and insersection of the arrays.#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findUnionIntersection(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;

    printf("Union: ");
    while (i < n1 || j < n2) {
        if (i < n1 && (j >= n2 || arr1[i] < arr2[j])) {
            printf("%d ", arr1[i++]);
        } else if (j < n2 && (i >= n1 || arr1[i] > arr2[j])) {
            printf("%d ", arr2[j++]);
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");

    printf("Intersection: ");
    i = 0;
    j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int n1, n2;

    printf("Enter the size of the first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter the elements of the first sorted array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter the elements of the second sorted array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    findUnionIntersection(arr1, arr2, n1, n2);

    return 0;
}

