// nth prime no
#include<stdio.h>
int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
int c=0,i=1;
while (c<=n)
{
int p=0;
for(int j=1; j<=i; j++)
{
if(i%j==0)
p++;
}
if(p==2)
c++;
{
if(c==n)
{
printf("%d i %d ",i,n);break;
}
i++;
}
}
return 0;
}



