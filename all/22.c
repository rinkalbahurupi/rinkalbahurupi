//draw a flowchart to obtain the sum and the differnt between two matrices.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of matrices: ");
    scanf("%d", &n);

    int matrixA[n][n];
    int matrixB[n][n];
    int sumMatrix[n][n];
    int diffMatrix[n][n];

    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Matrix Addition and Subtraction
    printf("Sum Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            diffMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    printf("Difference Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", diffMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

