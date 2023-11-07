//a store sells vadapav & samosas. they want a systeam where they enter the number of vadapav (V) and samosa (S) a customer buys and bill with the final price is automatiaclly calculated and displyed a vadapav cost 12rs.while samosa cost 15rs. write a program to create such a system.
#include<stdio.h>
int main()
{
int s,v,t;
printf("price of samosa and vadapav s,v");
scanf("%d %d",&s,&v);
t=s*15+v*12;
printf("%d\n",t);
return 0;
}

