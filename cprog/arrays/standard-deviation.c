#include <stdio.h>
#include <math.h>

void main() 
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    float sum = 0.0, mean, standard_deviation = 0.0;

    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }

    mean = sum / size;

    for (int i = 0; i < size; i++) {
        standard_deviation += pow(arr[i] - mean, 2);
    }

    standard_deviation = sqrt(standard_deviation / size);

    printf("Standard Deviation = %f\n", standard_deviation);
}
