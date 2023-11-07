/*
* * * * *
       *
     *
   *
 *
* * * * *
*/
#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=n; 0<i; i--)
{
for(j=1; j<=n;j++)
{
if(i==n || j==i || i==1)
{
printf("* ");
}
else
printf("  ");
}
printf("\n");
}
return 0;
}
