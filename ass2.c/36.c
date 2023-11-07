//a teacher has divided her calssroom into group of based of 5 ont their roll numbers the last roll no of each group who has been  elected as the leader of the group who will manage the task perform by the group write a program for the teacher  to enter  the roll no of the student and check if he /she is a group leader or not
#include<stdio.h>
int main()
{
int num;
printf("enter the num");
scanf("%d",&num);
if(num%5==0)
{
printf("he/she is group leader");
}
else
{
printf("he/she is not group leader");
}
return 0;
}
