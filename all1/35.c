//three test are given each one worth 50 points the better score of the first two tests is added to that of the third one to determine the final score and grade is assigened to each student on the percentage score as per the following rules.1) >=80 a.2)>=70 but <80 b. 3) >=60 but <70 c.4)>=50but<60 d.5)<50 f.

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
    int a, b, c;
    printf("Enter scores for student");
    scanf("%d %d %d", &a, &b, &c);
    int Score = (a > b) ? a + c : b + c;
    int grade = (Score >= 80) ? 'A' : (Score >= 70) ? 'B' : 
            (Score >= 60) ? 'C' : (Score >= 50) ? 'D' : 'F';
    printf(" %d, %d\n",Score, grade);
    }
    return 0;
    }

