#include <stdio.h>

void main() 
{
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Output the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

}