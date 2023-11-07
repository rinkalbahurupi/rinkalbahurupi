//construct a flowchart to input the month number and print the number of day in that month.
#include<stdio.h>
int main()
{
int mn;
printf("enter the num");
scanf("%d",&mn);
if(mn==1||mn==3||mn==5||mn==7||mn==9||mn==11)
{
printf("31 days");
}
else if(mn==4||mn==6||mn==8||mn==10||mn==12)
{
printf("30 days");
}
else if(mn==2)
{
printf("28 days");
}
return 0;
}

