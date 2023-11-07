/*#include<stdio.h>
int main()
{
int n,mid;
scanf("%d",&n);
int arr[n];
int r=34;
int l=0;
int h=n-1;
for(int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
while(l<=h)
{
int mid=(l+h)/2;
if(arr[mid]==r){
printf("%d",r);
break;
}
 if(r>arr[mid]){
l=mid+1;
}
else{
h=mid-1;
}
}
return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main() {
int n;
scanf("%d ",&n);
    int arr[] = {4, 9, 16, 25, 36};
    int   arr[n];
    int arr[0];
    int t = 25;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == t) {
            printf("Number %d found at index %d\n", t, i);
            double sqrt_result = sqrt(t);
            printf("Square root of %d is %lf\n", t, sqrt_result);
            break;
        }
    }

    if (i == n) {
        printf("Number %d not found in the array\n", t);
    }

    return 0;
}
*/



#include <stdio.h>
#include <math.h>
    int main() {
    int n;
    scanf("%d", &n);
    int arr[] = {1, 2, 3, 36, 67, 44, 32, 89};
    int t = 36;
    int i;
    for (i = 0; i < n; i++) {
    if (arr[i] == t) {
    printf("Number %d found at index %d\n", t, i);
    double sqrt_result = sqrt(t);
    printf("Square root of %d is %lf\n", t, sqrt_result);
    break;
    }
    }
    if (i == n) {
    printf("Number %d not found in the array\n", t);
    }
    return 0;
    }


