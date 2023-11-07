//if p amount of money is invested for n years at an annual rate of intrest  ,i, the money grows to an amount T where construct a flowchart to show t is determine.
#include<stdio.h>
#include<math.h>
int main()
{
int p,n,i,time;
printf("enter the number: p,n,i");
scanf("%d %d %d",&p,&n,&i);
time=(p*(i+1/100));
printf("%d\n",time);
return 0;
}
