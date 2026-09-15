/*
Find the sum of each row of a matrix and store it in an array.
*/


#include<stdio.h>

int main()
{
    int matrix[3][3], rowSum[3], i, j;

    // Input elements of the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for(i = 0; i < 3; i++)
    {
        rowSum[i] = 0; // Initialize sum for the current row
        for(j = 0; j < 3; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of each row:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}