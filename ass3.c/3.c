//construct a flowchart to input electricity unit charges and calculate the total electricity bill according to the given .
#include<stdio.h>
int main()
{
int n,b,t;
printf("enter the number,n");
scanf("%d",&n);
if(n<=50)
{
b=n*0.5;
printf("%d",b);
}
else if(n<=150)
{
b=(50*50)+(n-50)+0.75;
printf("%d",b);
}
else if(n<=250){
b=(50*0.5)+(n*0.75)+(n-150)*1.2;
printf("%d",b);
}
else{
b=(50*0.5)+(100*0.75)+(100*1.2)+(n-250)*1.5;
t=(b*0.2)+b;
printf("%d",t);
}
return 0;
}
