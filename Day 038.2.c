/*
Check if a matrix is symmetric.
*/


#include<stdio.h>

int main()
{
    int matrix[3][3], i, j, isSymmetric = 1;

    // Input elements of the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    // Print the result
    if(isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}