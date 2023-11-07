//to reverse the number//
#include<stdio.h>
int main()
{
int i,n,r,m;
printf("enter the num");
scanf("%d ", &n );
int rn=0;
while(n>0)
{
r=n%10;
rn=rn*10+r;
n=n/10;
printf("%d\n",rn);
}
return 0;
}
