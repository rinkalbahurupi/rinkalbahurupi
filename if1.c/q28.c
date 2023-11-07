//construct a flowchart to calculate the total marks obtained by a student in examination subjects:- (hindi,maths,english,science,ccomputer.)
#include<stdio.h>
int main()
{
int h,m,e,s,c,t;
printf("enter the marks,h,m,e,s,c");
scanf("%d %d %d %d %d",&h,&m,&e,&s,&c);
t=h+m+e+s+c;
printf("%dtotal marks",t);
return 0;
}

