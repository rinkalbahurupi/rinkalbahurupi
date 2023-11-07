//Write a C program that calculates the grade of a student based on their percentage. The grading system is: A (90-100), B (80-89), C (70-79), D (60-69), and F(below 60)
#include <stdio.h>

int main() 
{
   int p,grade;
    printf("Enter the p: ");
    scanf("%d", &p);
    if (p >= 90 && p <= 100)
     {
        grade = 'A';
    }
     else if (p >= 80 && p < 90)
     {
        grade = 'B';
    } else if (p >= 70 && p< 80) 
    {
        grade = 'C';
    } else if (p >= 60 && p < 70) 
    {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Grade: %c\n", grade);
    return 0;
}

