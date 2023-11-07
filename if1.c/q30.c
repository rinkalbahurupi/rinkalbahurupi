//construct a flowchart to determine the acceleration due to gravity where gravity can be obtined from the following formula:-T=2*3.14 square root I/g
//where T= time period of a simple pendulum.
//And I= effective length of the simple pendulum.
#include<stdio.h>
int main()
{
int t,i,g;
printf("acceleration due to gravity,t,i");
scanf("%d %d",&t,&i);
g=(4*3.14*3.14*i)/t*t;
printf("%d\n",g);
return 0;
}

