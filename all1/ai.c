#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
int k=87;
int l=0;
int h=n-1;

while(l<=h)
{
int mid=(l+h)/2;
if(arr[mid]==k)
{
printf("%d",mid);
break;
}

if(k>mid)
{
l=mid+1;
}
else{
h=mid-1;
}
}

return 0;
}

