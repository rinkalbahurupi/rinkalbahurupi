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



//armstrong no.
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


// 3rd max in n number.
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
printf("enter the number:");
scanf("%d",&arr[i]);
}
int max=0, smax=0, tmax=0;
for(int i=0; i<n; i++)
{
if(max<arr[i])
{
tmax=smax;
smax=max;
max=arr[i];
}
else if(smax<arr[i])
{
smax=max;
max=arr[i];
}
else if(tmax<arr[i])
{
tmax=arr[i];
}
}
printf(" Third max:%d",tmax);
return 0;
}
