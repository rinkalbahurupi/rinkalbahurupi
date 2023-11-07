//Write a C program that reads three angles of a triangle and determines whether it's an acute, obtuse, or right triangle.
#include <stdio.h>
    int main() 
    {
    int a, b, c;
    printf("Enter the three angles of the triangle");
    scanf("%d %d %d", &a,&b, &c);
    if (a + b + c == 180) 
    {
    if (a < 90 && b < 90 && c < 90) 
    {
    printf("It's an acute triangle.\n");
    }else if (a == 90 || b == 90 || c == 90) 
    {
    printf("It's a right triangle.\n");
    } 
    else 
    {
    printf("It's an obtuse triangle.\n");
    }
    } 
    else 
    {
    printf("Invalid input");
    }
    
    return 0;
    }

