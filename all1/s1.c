// string
//creting a string
#include<stdio.h>
int main()
{
char arr [] = "rinkal is best\0";
int i=0;
while (arr[i]!='\0')
{
printf("%char",arr[i]);
i++;
}
return 0;
}
