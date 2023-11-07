// write a program to crate an array of 7 number from the users and print if the completed array consits of consecative numbers are not.
#include<stdio.h>

   int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int c = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1] + 1) {
            c = 0;
            
        }
    }
    
    if(c) {
        printf(" consecutive numbers.\n");
    } else {
        printf(" not consecutive numbers.\n");
    }
    
    return 0;
}

