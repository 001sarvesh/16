// 3. Write a program in C to find the transpose of a given matrix.


#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[ROWS][COLS], int result[COLS][ROWS]) {
    // Traverse each row of the original matrix
    for (int i = 0; i < ROWS; i++) {
        // Traverse each column of the original matrix
        for (int j = 0; j < COLS; j++) {
            // Set the element at result[j][i] to the element at matrix[i][j]
            result[j][i] = matrix[i][j];
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
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result[COLS][ROWS];

    transposeMatrix(matrix, result);

    printf("Original Matrix:\n");
    printMatrix(matrix);

    printf("\nTranspose Matrix:\n");
    printMatrix(result);

    return 0;
}
