//take an inter n as input and check whether it ends with 3 or 7 if it ends with 3 print end with 3 if it end with 7 print end with 7 other wise print the number is itself.
#include<stdio.h>
int main()
{
int n;
printf("enter the number,n");
scanf("%d",&n);
if(n%10==3)
{
printf("end with 3");
}
else if(n%10==7)
{
printf("end with 7");
}
else
{
printf("itself");
}
return 0;
}
