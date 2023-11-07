//construct a flowchart to find the third max of given n number//

#include <stdio.h>

int main () {
    int max, smax, tmax, n, a;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &max);
    smax = max;
    tmax = max;
for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a);

        if (a > max) {
            tmax = smax;
            smax = max;
            max = a;
        } else if (a > smax && a < max) {
            tmax = smax;
            smax = a;
        } else if (a > tmax && a < smax) {
            tmax = a;
        }
    }

    printf("%d\n", tmax);

    return 0;
}

