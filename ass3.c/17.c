//"Write a program to check if the given number is divisible by 5, 11, both or none.
//If it is divisible by 5 then print 5
//If it is divisible by 11 then print 11
//If it is divisible by 5 and 11 then print “Both”
//If it is not divisible by 5 and 11 then print “None”
#include<stdio.h>
int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
if(n%5==0)
{
printf("%d",5);
}
else if(n%11==0)
{
printf("%d",11);
}
else if(n%5==0 && n%11==0)
{
printf("both");
}
else if(n%5!=0 && n%11!=0)
{
printf("none");
}
return 0;
}
