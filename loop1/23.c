//"You need to write a program that takes a whole number from the user and shows the number in reverse order.
 //For example, if the user enters the number 123, the program should display 321 as the result."
 #include<stdio.h>
 int main()
 {
 int n,r,sum=0;
 printf("enter the number ,n");
 scanf("%d",&n);
 if(n>0)
 {
 r=n%10;
 sum=sum*10+r;
 n=n/10;
 }
 printf("%d\n",sum);
 return 0;
 }
