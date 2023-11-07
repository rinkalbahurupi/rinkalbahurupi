//construct  a flowchart to check whether number is the largest 3 digit number.
#include<stdio.h>
int main()
{
int num;
printf("enter the number,num");
scanf("%d",&num);
if(num>=999)
{
printf("its largest 3 digit num");
}
else
{
printf("its smallest 3 digit num");
}
return 0;
}
