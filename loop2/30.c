/*
* * * * *
        *
        *
        *
* * * * *
*
*
*
* * * * *
*/
#include<stdio.h>
int main()
{
	int i,n,p,k;
printf("Enter the num");
scanf("%d", &n);
for(i = 1; i <=1; i++)
{
for(int j=1; j<=n; j++)
{
printf("* ");
}
}printf("\n");
for(i=1; i<=n-1;i++)
{
for(int j = 1; j <=n; j++)
{
if(j==1 || j==n){
printf("* ");
}
else {
printf("  ");
}
}printf("\n");
}
for(i = 1; i <=1; i++)
{
for(int j=1; j<=n; j++)
{
printf("* ");
}
}printf("\n");
for(p=1; p<=1;p++)
{
for(int k = 1; k <=n; k++)
{
if(k==1 || k==n){
}
else {
printf("  ");
}
}printf("\n");
}
int m;
 for (n=1; n<=n-1;n++)
{
for( m = 1; m <=n; m++)
{
printf("* ");
}
printf("\n");
}
return 0;
}                                  

