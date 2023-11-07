// construct a flowchart to input n numbers feom the user store them in a array then show how to determine the maximum number.
       #include <stdio.h>
       int main() {
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int arr[n];
       for (int i = 0; i < n; i++) {
        printf("Enter element");
        scanf("%d", &arr[i]);
        }
        int max = arr[0];
        for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        }
        printf("The maximum number is: %d\n", max);
        return 0;
        }

