//find the whethr a given year is leap year 
#include<stdio.h>
int main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%4==0)
{
printf("its leap year");
}
else if(y%100==0)
{
printf("its leap year");
}
else if(y%400==0)
{
printf("its leap year");
}
else
{
printf("its not leap year");
}
return 0;
}
