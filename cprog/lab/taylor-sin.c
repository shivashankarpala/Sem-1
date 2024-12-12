#include<stdio.h>
#include<math.h>

void main()
{
    int i, n;
    float x, dx, term, sum;

    printf("Input Angle in Degrees ");
    scanf("%f", &dx);
    printf("Input No. of terms to be considered ");
    scanf("%d", &n);

    x = dx * 3.14/180;

    sum = x; term = x;
    for(i = 1; i <= n; i++)
    {
        term = (-x*x)/((2*i+1)*(2*i))*term;
        sum += term;
    }

    printf("\nCalculated Value of sin(x): %f", sum);
    printf("\nExpected Value of sin(x): %f", sin(x));
}