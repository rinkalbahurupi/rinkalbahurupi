//Write a C program that takes a student's score as input and rounds it to the nearest ten.
#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    int roundedScore = (score + 5) / 10 * 10;
    printf("Rounded score: %d\n", roundedScore);
    
    return 0;
}

