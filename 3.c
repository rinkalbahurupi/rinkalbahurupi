// odd no.//
#include<stdio.h>
int main()
{
int n,i,k;
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
printf("enter the num:");
scanf("%d",&arr[i]);

}

for(i=0;i<n;i++)
{
if(i%2!=0)
{
printf("%d ",arr[i]);
}
}
return 0;
}
