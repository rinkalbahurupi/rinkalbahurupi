//Accept the lengths of the three sides of a triangle to validate whether they can be the sides of a triangle and then classify the triangle as equilateral (all three sides are equal), scalene (all three sides are different), or isosceles (exactly two sides are equal), and then to see whether it is a right-angled triangle (the sum of the squares of two sides is equal to the square of the third side.)
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c && c==a)
    {
    printf("equilatral traingle");
    }
    else  if (c==b+a || a==c+b || b==a+c)
    {
    printf("right angle trangle");
    }
    else if (a!=b && b!=c && c!=a)
    {
    printf("scalene angle");
    }
    else if(a==c||c==b||b==a)
    {
    printf("isosceles angle");
    }
    return 0;
    }
    
