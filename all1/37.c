// create an array to store armstrong no upto take n as input from the the users.
/*#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int c, r, sum;
    int num [n];
    int count = 0;

    for (int k = 0; k < n; k++) {
        int a = arr[k];
        int o = a;
        int d = 0;

        while (o != 0) {
            o /= 10;
            d++;
        }

        o = a;
        sum = 0;

        while (o!= 0) {
            r = o % 10;
            sum += pow(r, d);
            o/= 10;
        }

        if (sum == a) {
           int c = a;
            c++;
        }
    }

    printf("Armstrong numbers in the array:\n");
    for (int i = 0; i < c; i++) {
        printf("%d\n",num[i]);
    }

    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int num[n]; // Changed from 'num' to 'num[n]'
    int count = 0;

    for (int k = 0; k < n; k++) {
        int a = arr[k];
        int originalA = a;
        int numDigits = 0;

        while (originalA != 0) {
            originalA /= 10;
            numDigits++;
        }

        originalA = a;
        int sum = 0;

        while (originalA != 0) {
            int r = originalA % 10;
            sum += pow(r, numDigits);
            originalA /= 10;
        }

        if (sum == a) {
            num[count] = a; // Assign 'a' to 'num[count]'
            count++;
        }
    }

    printf("Armstrong numbers in the array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}


