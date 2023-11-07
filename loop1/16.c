//Write a program to calculate the sum of the following series where n is input. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;  
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;
    }
    
    printf("%.2f\n", sum); 
    
    return 0;
}

