//given an array of size n that containes only non negeative integers the contiguous subaeeay which multiple subarray return the subarray which comes first moveing from the left the to right let us say array is -3, 6,,7,5,10and the value of 5=12 the output should br 7,5
#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);

    int start = 0;
    int sum = arr[0];
    int found = 0;

    for (int i = 1; i <= n; i++) {
        while (sum > target && start < i - 1) {
            sum -= arr[start];
            start++;
        }

        if (sum == target) {
            printf("Subarray found between indexes %d and %d\n", start, i - 1);
            for (int j = start; j < i; j++) {
                printf("%d ", arr[j]);
            }
            found = 1;
            break;
        }

        if (i < n) {
            sum += arr[i];
        }
    }

    if (!found) {
        printf("No subarray found with the given target sum.\n");
    }

    return 0;
}

