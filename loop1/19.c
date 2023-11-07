//find the 2nd max in 4 number.
#include <stdio.h>

int main() {
    int a, b, c, d;
    int max1, max2, m;
    int smax, smax1, sm, sm1, sm2;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a > b) {
        max1 = a;
        smax = b;
    } else {
        max1 = b;
        smax = a;
    }
    
    if (c > d) {
        max2 = c;
        smax1 = d;
    } else {
        max2 = d;
        smax1 = c;
    }
    
    if (max1 > max2) {
        m = max1;
        sm = max2;
    } else {
        m = max2;
        sm = max1;
    }
    
    if (smax > smax1) {
        sm1 = smax;
    } else {
        sm1 = smax1;
    }
    
    if (sm1 > sm) {
        sm2 = sm1;
    } else {
        sm2 = sm;
    }
    
    printf("max is: %d\n", m);
    printf("Smax is: %d\n", sm2);
    
    return 0;
}

