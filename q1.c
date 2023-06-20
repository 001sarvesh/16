
//  Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    // Traverse each element of the matrices
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Add corresponding elements of matrix1 and matrix2
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    // Traverse each element of the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Print each element
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    addMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nSum of matrices:\n");
    printMatrix(result);

    return 0;
}
