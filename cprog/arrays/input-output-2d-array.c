#include <stdio.h>

void main() 
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Input elements in the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Output elements of the array
    printf("The array is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}