//accept the number of days from the user and calculate  the charge for the liborty according to the following.
#include<stdio.h>
int main()
{
int d,c;
printf("enter number of days");
scanf("%d",&d);
if(d<=5)
{
c=d*2;
printf("%d",c);
}
else if(d<=10)
{
c=d*3;
printf("%d",c);
}
else if(d<=15)
{
c=d*4;
printf("%d",c);
}
else if(d>15)
{
c=d*5;
printf("%d",c);
}
return 0;
}
