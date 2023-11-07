//construct a flowchart to take two sides as a input and cheak whether  it is a rectangle or a square
#include<stdio.h>
int main()
{
int ab,cd;
printf("enter the the sides,ab,cd");
scanf("%d %d",&ab,&cd);
if(ab==cd)
{
printf("it is square");
}
else
{
printf("it is rectangle");
}
return 0;
}
