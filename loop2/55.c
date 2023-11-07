// find the second max in given n number//
#include <stdio.h>
int main () {
    int max, smax, n, a;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &max);
    smax = max;
    
for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a);

        if (a > max) {
            
            smax = max;
            max = a;
        } else if (a > smax && a < max) {
            
            smax = a;
  }
}
    printf("%d\n", smax);

    return 0;
}

