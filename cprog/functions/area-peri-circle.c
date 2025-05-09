#include <stdio.h>

float calculate_area(float radius, const float PI)
{
    return PI * radius * radius;
}

float calculate_perimeter(float radius, const float PI)
{
    return 2 * PI * radius;
}

int main() {
    const float PI = 3.14159f;
    float radius, area, perimeter;

    // Input radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and perimeter
    area = calculate_area(radius, PI);
    perimeter = calculate_perimeter(radius, PI);

    // Output the results
    printf("Area of the circle: %f\n", area);
    printf("Perimeter of the circle: %f\n", perimeter);

    return 0;
}