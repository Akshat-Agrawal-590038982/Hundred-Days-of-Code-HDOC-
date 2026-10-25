/* Perform diagonal traversal of a matrix. */


#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("Diagonal elements: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}