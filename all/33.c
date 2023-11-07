//in a certain hospital the weight of newborn babies are recorded each month and then processed at the end of the month to determine the following 1) mean weight of the babies.2) maximum of the weight .3) minimum weight.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of babies: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the weight of baby %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the mean weight
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = (float)sum / n;

    // Find the maximum and minimum weight
    int max = arr[0];
    int min = arr[0];#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of babies: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the weight of baby %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the mean weight
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = (float)sum / n;

    // Find the maximum and minimum weight
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Mean weight: %.2f\n", mean);
    printf("Maximum weight: %d\n", max);
    printf("Minimum weight: %d\n", min);

    return 0;
}

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Mean weight: %.2f\n", mean);
    printf("Maximum weight: %d\n", max);
    printf("Minimum weight: %d\n", min);

    return 0;
}

