// 8. Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>

#define SIZE 3

void printUpperTriangular(int matrix[SIZE][SIZE]) {
    // Traverse each row of the matrix
    for (int i = 0; i < SIZE; i++) {
        // Traverse each column of the matrix
        for (int j = 0; j < SIZE; j++) {
            // Check if the element is in the upper triangular part (i.e., j >= i)
            if (j >= i) {
                // Print the element
                printf("%d\t", matrix[i][j]);
            } else {
                // Print a placeholder (such as 0 or -1)
                printf("0\t");
            }
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Upper Triangular Matrix:\n");
    printUpperTriangular(matrix);

    return 0;
}
