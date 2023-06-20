
// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

#define ROWS 3
#define COLS 3

int findMaxOnesRow(int matrix[ROWS][COLS]) {
    int maxRow = 0;  // Store the row index with maximum 1s
    int maxOnes = 0; // Store the count of maximum 1s found
    
    // Traverse each row
    for (int i = 0; i < ROWS; i++) {
        int countOnes = 0;  // Count of 1s in the current row
        
        // Traverse each column in the current row
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 1) {
                countOnes++;
            }
        }
        
        // Update maxRow and maxOnes if the current row has more 1s
        if (countOnes > maxOnes) {
            maxRow = i;
            maxOnes = countOnes;
        }
    }
    
    return maxRow;
}

int main() {
    int matrix[ROWS][COLS] = {
        {0, 1, 1},
        {1, 1, 1},
        {1, 0, 1}
    };

    int maxRow = findMaxOnesRow(matrix);

    printf("The row with the maximum number of 1s is: %d\n", maxRow);

    return 0;
}
  