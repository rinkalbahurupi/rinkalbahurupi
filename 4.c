//even no.//
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i=i+1)
{
printf("enter the num:");
scanf("%d",&arr[i]);

}

for(int i=0;i<n;i=i+1)
{
if(i%2==0)
{
printf("%d ",arr[i]);
}
}
return 0;
}


