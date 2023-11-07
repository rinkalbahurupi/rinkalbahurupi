//Draw a flowchart to find simple interest
#include<stdio.h>
int main()
{
int p,r,t,si;
printf("enter the number:p,r,t");
scanf("%d %d %d",&p,&r,&t);
si=p*r*t/100;
printf("%d\n",si);
return 0;
}
