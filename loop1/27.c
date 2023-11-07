/*"Write a program for obtaining the sum of a given number of terms (n) for a given value of X in the following mathematical series: (Input X and N from the user)
i) X+(X^2)/2+(X^3)/3+(X^4)/4  ....upto n terms
ii) X-(X^3)/3+(X^5)/5-(X^7)/7+(X^9)/9-.... upto n terms
iii) X-(X^3)/3!+(X^5)/5!-(X^7)/7!+ .... upto n terms
*/

#include<stdio.h>
#include<math.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int x, n, i;
    float sum1 = 0, sum2 = 0, sum3 = 0;

    printf("Enter the value of X and N: ");
    scanf("%d %d", &x, &n);

    // Series 1: X + (X^2)/2 + (X^3)/3 + (X^4)/4 + ... upto n terms
    for (i = 1; i <= n; i++) {
        sum1 = sum1 + pow(x, i) / i;
    }

    // Series 2: X - (X^3)/3 + (X^5)/5 - (X^7)/7 + (X^9)/9 + ... upto n terms
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum2 = sum2 + pow(x, 2 * i - 1) / (2 * i - 1);
        } else {
            sum2 = sum2 - pow(x, 2 * i - 1) / (2 * i - 1);
        }
    }

    // Series 3: X - (X^3)/3! + (X^5)/5! - (X^7)/7! + ... upto n terms
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum3

