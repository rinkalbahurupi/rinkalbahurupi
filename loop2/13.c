/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */
#include<stdio.h>
int main()
{
int i,j,p=1,n;
scanf("%d",&n);
for(i=1;i<n;i++)
{
for(p=1;p<=i;p++)
{
printf("%d ",p);
j=j-1;
j=n-1;
}
printf("\n");
}
return 0;
}
