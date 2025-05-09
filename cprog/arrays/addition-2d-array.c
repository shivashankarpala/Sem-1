#include <stdio.h>

void main() 
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array1[rows][cols];
    int array2[rows][cols];
    int result[rows][cols];

    //Inputing elements of the matrices
    printf("Enter elements of first matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter elements of second matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    //Actual addition of matrices
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    //Printing the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}