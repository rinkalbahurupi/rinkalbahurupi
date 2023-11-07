//construct a flowchart to calculate the area and perimeater of a square .
#include <stdio.h>

int main() {
    int a, area, perimeter;
    
    printf("Enter the side length, a: ");
    scanf("%d", &a);
    
    area = a * a;
    perimeter = 4 * a;
    
    printf("Area: %d\nPerimeter: %d\n", area, perimeter);
    
    return 0;
}

