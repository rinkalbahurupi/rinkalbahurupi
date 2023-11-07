//you have denominator of rupee notes in the following from 1,2,5,10,20,100,200,500,2000 take any amount from the user and point the minimum number of notes needed to add up to that number.
#include<stdio.h>
int main()
{
int n,c;
printf("enter the num");
scanf("%d",&n);
if(n>=2000)
{
c=n/2000;
n=n%2000;
printf("%d %d",n,c);
}
else if(n>=500)
{
c=n/500;
n=n%500;
printf("%d %d",n,c);
}
else if(n>=200)
{
c=n/200;
n=n%200;
printf("%d %d",n,c);
}
else if(n>=100)
{
c=n/100;
n=n%100;
printf("%d %d",n,c);
}
else if(n>=50)
{
c=n/50;
n=n%50;
printf("%d %d",n,c);
}
else if(n>=20)
{
c=n/20;
n=n%20;
printf("%d %d",n,c);
}
else if(n>=10)
{
c=n/10;
n=n%10;
printf("%d %d",n,c);
}
else if(n>=5)
{
c=n/5;
n=n%5;
printf("%d %d",n,c);
}
else if(n>=2)
{
c=n/2;
n=n%2;
printf("%d %d",n,c);
}
else if(n>=1)
{
c=n/1;
n=n%1;
printf("%d %d",n,c);
}
else 
{
printf("invalid");
}
return 0;
}

