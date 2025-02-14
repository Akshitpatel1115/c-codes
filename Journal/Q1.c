/* Write a C program that create 3X3 matrix and replace last element of each row with sum of that row Elements. */

#include <stdio.h>

int main() {
    int matrix[3][3];
    int row, col;

    // Input elements into the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    // Replace the last element of each row with the sum of that row's elements
    for (row = 0; row < 3; row++) {
        int sum = 0;
        for (col = 0; col < 3; col++) {
            sum += matrix[row][col];
        }
        matrix[row][2] = sum; // Replace the last element
    }

    // Display the modified matrix
    printf("Modified 3x3 matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
