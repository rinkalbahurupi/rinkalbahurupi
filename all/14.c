// make a flowchart to count positive & negative elements in an array take elements as input from the users.
#include<stdio.h>
int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
printf("enter the num");
scanf("%d",&arr[i]);
}
int cp=0;
int cn=0;


for(int i=0;i<n; i++)
{
if(arr[i]>0)
{
cp=cp+1;
}
else if (arr[i]<0)
{
cn=cn+1;
}
}
printf("%d\n",cp);
printf("%d\n",cn);

return 0;
}

