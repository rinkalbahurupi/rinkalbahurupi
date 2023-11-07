//conatruct a flowchart to check if a given number is one digit or three digit or more than three digits.
#include<stdio.h>
int main()
{
int num;
printf("enter the num");
scanf("%d",&num);
if(num<=9)
{
printf("one digit");
}
else if(num<=99)
{
printf("two dtgit");
}
else if(num<=999)
{
printf("three digit");
}
else
{
printf("more than three digit");
}
return 0;
}
