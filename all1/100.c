// car .
#include<stdio.h>
int main()
{
int s=0;
while(1)
{
int m;
scanf("%d",&m);
if(m==1)
{
if(s==1)
{
printf("already start\n");
}
else
{
printf("start\n");
s=1;
}
}
else if(m==0)
{
if(s==0)
{
printf("already stop\n");
}
else
{
printf("stop\n");
s=0;
}
}
else if(m!=1 && m!=0)
{
printf("crash\n");
break;
}
}
return 0;
}

