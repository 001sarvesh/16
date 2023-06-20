// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

#define ROWS 3
#define COLS 3

void sumRowsAndColumns(int matrix[ROWS][COLS]) {
    int rowSum[ROWS] = {0};    // Array to store the sum of each row
    int colSum[COLS] = {0};    // Array to store the sum of each column

    // Traverse each row of the matrix
    for (int i = 0; i < ROWS; i++) {
        // Traverse each column of the matrix
        for (int j = 0; j < COLS; j++) {
            // Add the element at matrix[i][j] to the corresponding row sum
            rowSum[i] += matrix[i][j];

            // Add the element at matrix[i][j] to the corresponding column sum
            colSum[j] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of rows:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i+1, rowSum[i]);
    }

    // Print the sum of each column
    printf("\nSum of columns:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j+1, colSum[j]);
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    sumRowsAndColumns(matrix);

    return 0;
}
