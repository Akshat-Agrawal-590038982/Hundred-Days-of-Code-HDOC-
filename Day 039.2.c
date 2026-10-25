/*
Find the sum of main diagonal elements for a square matrix.
*/


#include <stdio.h>

int main () {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i;
    int sum = 0; // Initialize sum of diagonal elements

    for (i = 0; i < 3; i++) {
        sum += matrix[i][i]; // Add the diagonal element to sum
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}