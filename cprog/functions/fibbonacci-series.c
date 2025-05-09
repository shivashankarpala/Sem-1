#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

void main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

}