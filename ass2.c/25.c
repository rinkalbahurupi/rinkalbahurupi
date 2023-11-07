//a student will not be allowed to sit in an exam if his \her attendence is less then 75% take following iput from the user number of classes held.held number of classes attented and print percentage of class attended and print percentage of class attended is the student allowed to sit in exam in the exam or not.
#include<stdio.h>
int main()
{
int noclass,classatt,p;
printf("enter noclass,classatt");
scanf("%d %d",&noclass,&classatt);
if(classatt>=75)
{
p=classatt*100/noclass;
printf("allow to sit=%d\n",p);
}
else
{
printf("not allow to sit");
}
return 0;
}

