#include <stdio.h>

void main() 
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = -1;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) {
            result = i; // Store the index of the target element
            break;
        }
    }

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
}