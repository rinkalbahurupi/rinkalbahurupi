//construct a flowchart to categorise the shape of a quadrilatreal as either a square,rhomus,rectangle,pallalogram or irregular quadrilateral having input the length of the four  side and one interal angle.
#include<stdio.h>
int main() {
    int a, b, c, d, i;

    printf("Enter the lengths (a, b, c, d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("one internal angle (i): ");
    scanf("%d", &i);

    if (a == b && b == c && c == d && i == 90) {
        printf("Square\n");
    } else if (a == c && b == d && i == 90) {
        printf("Rectangle\n");
    } else if (a == b && c == d) {
        printf(" Rhombus\n");
    } else if (i == 90) {
        printf("Parallelogram\n");
    } else {
        printf(" Irregular Quadrilateral\n");
    }

    return 0;
}

