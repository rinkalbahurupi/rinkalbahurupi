//take two sorted arrays of size m and n from the users as input and returned the median of two sorted arrays 

  /*  #include <stdio.h>
    int main() {
    int m, n,median;
    printf("Enter sizes of the two arrays: ");
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < m; i++) 
    scanf("%d", &arr1[i]);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n; i++)
     scanf("%d", &arr2[i]);

    int s[m + n], i = 0, j = 0, k = 0;
    while (i < m && j < n) 
    s[k++] = (arr1[i] <= arr2[j]); 
     arr1[i++] : arr2[j++];
    while (i < m) 
    s[k++] = arr1[i++];
    while (j < n) 
    s[k++] = arr2[j++];

    int totalSize = m + n;
   if (j% 2 == 0) 
     (s[j / 2 - 1] + s[j / 2]) / 2.0 - s[j / 2];
    printf("%d\n", median);

    return 0;
}
*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes of the two arrays: ");
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < m; i++) scanf("%d", &arr1[i]);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    int merged[m + n], i = 0, j = 0, k = 0;
    while (i < m && j < n) merged[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    while (i < m) merged[k++] = arr1[i++];
    while (j < n) merged[k++] = arr2[j++];

    int totalSize = m + n;
    double median = (totalSize % 2 == 0) ? (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0 : merged[totalSize / 2];
    printf("Median: %.2lf\n", median);

    return 0;
}


]
