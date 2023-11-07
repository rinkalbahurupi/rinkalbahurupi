/*reverse no.
       #include <stdio.h>

       int main() {
       int n, r = 0;

        printf("Enter the number: ");
        scanf("%d", &n);

        while (n > 0) {
        r = r * 10 + n % 10;
        num /= 10;
        }

        printf("Reversed number: %d\n", r);

        return 0;
        }
*/
/*armstrong no.
#include<stdio.h>
#include<math.h>
int main()
{
int n,m;
printf("enter the number:");
scanf("%d %d",&n,&m);
int arr[n];
int p=0,k=0;
for(int i=1; i<=n; i++)
{int c=0,b=i;
while(b>0)
{
c=c+1;
b=b/10;
}
int sum=0,a=i,r;
while(a>0)
{
r=a%10;
sum=sum+pow(r,c);
a=a/10;
}
if(sum==i)
{
arr[p]=i;
p=p+1;
k=k+1;
}
}
int i;
for(i=0; i<m; i++)
{
printf("%d ",arr[i]);
}
return 0;
}
*/
/*prime
#include<stdio.h>
int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
int c=0,i=1;
while (c<=n)
{
int p=0;
for(int j=1; j<=i; j++)
{
if(i%j==0)
p++;
}
if(p==2)
c++;
{
if(c==n)
{
printf("%d i %d ",i,n);break;
}
i++;
}
}
return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int n, f = 0, s= 1, r, i;
    printf("Enter the number  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    if (i <= 1)
    r = i;
    else {
    r = f + s;
    f = s;
    s = r;
    }
    printf("%d ", r);
    }  
    printf("\n"); 
    return 0;
}
*/

/* palimdrom no.
#include <stdio.h>

int main() {
    int n, r = 0, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    
    while (p != 0) {
        r = r * 10 + p % 10;
        p = p / 10;
    }
    
    if (r == n) {
        printf("The given number is a palindrome.\n");
    } else {
        printf("The given number is not a palindrome.\n");
    }
    
    return 0;
}


