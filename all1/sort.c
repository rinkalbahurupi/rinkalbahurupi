/*#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
printf("%d", arr[i]);
{
int c[n];
for (int i=0; i<n; i++)
{
for (int j=i+1; j<=n-i-1; j++)
{
if(arr[i]>arr[j])
{
int temp=arr[i];
arr[i]=arr[j];
 arr[j]=arr[i];
}
}
}
}
}
for (int i=0; i<n; i++)
{
printf("%d",arr[i]);
}
return 0;
}
*/
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

