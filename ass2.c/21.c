//construct a flowchart to calcualte the sum of two given integers however if the sum is between 15 to 20 it will be return 20.
#include<stdio.h>
int main()
{
int c,a,b;
printf("enter the num,a,b");
scanf("%d %d",&a,&b);
c=(a+b);
if(c>=15 && c<=20)
{
printf("20");
}
else
{
printf("%d\n",c);
}
return 0;
}
