//in the above question take the first condition as divisiable of year by 100 and construct the flowchart do the dry run for the same inputs.
#include<stdio.h>
int main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%100==0 && y%400==0)
{
printf("leap year");
}
else if(7%4==0)
{
printf("leap year");
}
else 
{
printf("not  leap year");
}
return 0;
}
