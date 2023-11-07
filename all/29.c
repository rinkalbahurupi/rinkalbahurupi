// construct a flowchart to input n numbers from the users store them in a list then show how to determine the maximum numbers.
#include<stdio.h>
int main()
{
int n;
int arr[n];
printf("enter the num");
scanf("%d",&n);
for(int i=0; i<=n; i++)
{
printf("enter the elements");
scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
int max=arr[0];
if (max<arr[i])
{
max=arr[i];
}

else
{
printf("%d\n",max);
}
}
return 0;
}
