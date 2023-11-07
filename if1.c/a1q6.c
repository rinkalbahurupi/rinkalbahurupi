//construct a flowchart to show how to obtain the daily wage of a worker on the basis of the hours worked during the day.
#include<stdio.h>
int main()
{
int wage,hour,dailywage,working;
printf("enter the number: wage,hour");
scanf("%d %d",&wage,&hour);
dailywage=(wage*hour);
printf("%d\n",dailywage);
return 0;
}
