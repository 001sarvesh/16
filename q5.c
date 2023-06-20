// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

#define SIZE 3

int sumLeftDiagonals(int matrix[SIZE][SIZE]) {
    int sum = 0;

    // Traverse each row of the matrix
    for (int i = 0; i < SIZE; i++) {
        // Add the element at matrix[i][SIZE - 1 - i] to the sum
        sum += matrix[i][SIZE - 1 - i];
    }

    return sum;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = sumLeftDiagonals(matrix);

    printf("Sum of left diagonals: %d\n", sum);

    return 0;
}
