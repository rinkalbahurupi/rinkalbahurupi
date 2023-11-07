// in the flowchart of the above question print the names input by the users in the reverse order.
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    char names[n][100];
    
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    
    printf("Names in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}

