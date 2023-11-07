//construct a flowcahrt to display "hello" if a number entered by the user is a multiple of five,otherwise print "bye"
#include<stdio.h>
int main()
{
int num;
printf("enter the number,num");
scanf("%d",&num);
if(num%5==0)
{
printf("hellow");
}
else
{
printf("bye");
}
return 0;
}
