//even number multiplication

#include<stdio.h>
int main()
{
int p=1,a,i;
printf("enter the number,a");
scanf("%d",&a);
for( i=1;i<=a;i++)
{
if(i%2==0)
{
p=p*i;
}
}printf("%d\n",p);
return 0;
}

