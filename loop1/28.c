//construct a flowchart to find the out the dum of the first n terms of the following series 5+55+555+.....upto n term.
#include<stdio.h>
int main()
{
int n,sum=0,i,j=5;
printf("enter the num,n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum*10+j;
}
printf("%d\n",sum);
return 0;
}

