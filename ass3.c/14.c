//in the above question take the first condition as divisibility of year by 400 and construct a flowchart 
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
else if(y%4==0)
{
printf("leap year");
}
else
{
printf("its not leap year");
}
return 0;
}
