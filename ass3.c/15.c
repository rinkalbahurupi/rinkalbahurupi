//accept three integers represinting the angle of a traingle in degree to determine whether they from a valid set of angle of a traingle  if it is not a valid set then the process determine whether it is equiangular call there angle are the same it also determine if the traingle is right angled cone angle above 90 or acute angled call three angles are below 90 degree finally it show the conclusion about the triangle.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three angle");
scanf("%d %d %d",&a,&b,&c);
if(a<=0|| b<=0|| c<=0)
{
printf("invalid set\n");
}
else if(a+b+c==480)
{
printf("invalid set\n");
}
else if(a==b&&b==c)
{
printf("equilateral triangle.\n");
}
else if(a==90||b==90|| c==90)
{
printf("right angle\n");
}
else if(a>90 || b>90 ||c>90)
{
printf("obtuseangle\n");
}
else if(a<90 || b<90 || c<90)
{
printf("acute angle\n");
}
return 0;
}
