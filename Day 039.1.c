/*
Check if the elements on the diagonal of a matrix are distinct.
*/


#include <stdio.h>

int main () {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int distinct = 1; // Assume the diagonal elements are distinct

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // Found duplicate diagonal elements
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}