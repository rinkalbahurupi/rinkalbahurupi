// Draw a flowhart to print even number from 32 to 61.
#include<stdio.h>
int main()
{
int n,i;
printf("enter the num:N");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
printf("enter the num:\n");
scanf("%d",&arr[i]);
}

int k=0;
int b[k];
for(i=0; i<=n; i++)
{
if (arr[i]%2==0)
{
b[k]=arr[i];
k=k+1;
}
}
for(i=0;i<k;i++)
{
printf("%d ",b[i]);
}

return 0;
}
