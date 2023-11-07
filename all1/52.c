//write a program to reverse t he array without using extra array .
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

