#include <stdio.h>

int main() {
    int size = 7;  // Adjust the size of the heart

    // Upper part of the heart
    #include <stdio.h>

int main() {
    int size = 7;  // Adjust the size of the heart

    // Upper part of the heart
    for (int i = size / 2; i <= size; i += 2) {
        for (int j = 1; j < size - i; j += 2) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part of the heart
    for (int i = size; i >= 1; i--) {
        for (int j = i; j < size; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


    // Lower part of the heart
    for (int i = size; i >= 1; i--) {
        for (int j = i; j < size; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

