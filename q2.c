// 2. Write a program to calculate the product of two matrices each of order 3x3.
 
 #include <stdio.h>

#define ROWS 3
#define COLS 3

void multiplyMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    // Traverse each row of matrix1
    for (int i = 0; i < ROWS; i++) {
        // Traverse each column of matrix2
        for (int j = 0; j < COLS; j++) {
            // Initialize the element at result[i][j] to 0
            result[i][j] = 0;
            
            // Traverse each column of matrix1 or each row of matrix2
            for (int k = 0; k < COLS; k++) {
                // Multiply corresponding elements of matrix1 and matrix2 and accumulate the sum
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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

    multiplyMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nProduct of matrices:\n");
    printMatrix(result);

    return 0;
}
