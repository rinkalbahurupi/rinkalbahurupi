//whole no//
#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int arr [n];
for(i=0; i<n; i++)
{
printf("enter the num:");
scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
printf("%d ",arr[i]);
}
return 0;
}
