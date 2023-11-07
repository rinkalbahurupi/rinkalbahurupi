//a company decided to give  a bonus of 5% to an employee if his/her year of service is more than 5 year ask users for their salary and years of service and print the net bonus amount.
#include<stdio.h>
int main()
{
int yearservice,bonus,salary;
printf("enter the bonus amount,year service,salary");
scanf("%d %d",&yearservice,&salary);
if(yearservice>=5)
{
bonus=(salary/100*5);
printf("%d",bonus);
}
else
{
printf("invalid");
}
return 0;
}
