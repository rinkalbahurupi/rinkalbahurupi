// construct a flowchart to create a array to in items where n is input from the from the user and odd them to the list.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }
    int j = 0; // Initialize j to zero
    for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
    j = j + arr[i];
    }
    }
    printf("Sum of odd elements: %d\n", j);
    return 0;
}

