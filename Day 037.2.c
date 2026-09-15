/*
Find the transpose of a matrix.
*/


#include<stdio.h>

int main()
{
    int matrix[3][3], transpose[3][3], i, j;

    // Input elements of the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose of the matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}