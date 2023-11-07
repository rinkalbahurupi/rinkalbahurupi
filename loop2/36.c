/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
#include<stdio.h>
int main()
{
int i,n;
printf("enter the num");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
int k=n;
for(int j=1; j<=i; j++)
{
printf("%d ",k);
k=k-1;
}
printf("\n");
}
return 0;
}
