
//100 to 999 armstrong no.
#include<stdio.h>
#include<math.h>
int main()
{
int n,m;
printf("enter the number:");
scanf("%d %d",&n,&m);
int arr[n];
int p=0,k=0;
for(int i=1; i<=n; i++)
{int c=0,b=i;
while(b>0)
{
c=c+1;
b=b/10;
}
int sum=0,a=i,r;
while(a>0)
{
r=a%10;
sum=sum+pow(r,c);
a=a/10;
}
if(sum==i)
{
arr[p]=i;
p=p+1;
k=k+1;
}
}
int i;
for(i=0; i<m; i++)
{
printf("%d ",arr[i]);
}
return 0;
}
