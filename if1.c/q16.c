//give the circumfernce of a circle constant a flowchart to calculate the diameter.
#include <stdio.h>

int main() {
    float pi = 3.14;
    float c, diameter;

    printf("Enter the c: ");
    scanf("%f", &c);

    diameter = c / pi;
    printf("%f", diameter);

    return 0;
}

