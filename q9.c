// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.


#include <stdio.h>

#define ROWS 3
#define COLS 3

int isSparseMatrix(int matrix[ROWS][COLS]) {
    int zeroCount = 0;
    int totalCount = ROWS * COLS;

    // Traverse each row of the matrix
    for (int i = 0; i < ROWS; i++) {
        // Traverse each column of the matrix
        for (int j = 0; j < COLS; j++) {
            // Check if the element is zero
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // Check if the ratio of zero elements to total elements is greater than 0.5
    if ((float)zeroCount / totalCount > 0.5) {
        return 1;   // Sparse matrix
    } else {
        return 0;   // Not a sparse matrix
    }
}

int main() {
    int matrix[ROWS][COLS];

    printf("Enter the elements of the matrix:\n");

    // Accept the elements of the matrix from the user
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSparse = isSparseMatrix(matrix);

    if (isSparse) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
