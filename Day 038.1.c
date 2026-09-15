/*
Add two matrices.
*/


#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;

    // Input elements of the first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate sum of the two matrices
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum of the two matrices
    printf("Sum of the two matrices:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}