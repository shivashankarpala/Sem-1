#include<stdio.h>

void main()
{
    float mm, cm, m, km;

    printf("Input Distance in kilometer ");
    scanf("%f", &km); 

    m = km * 1000;
    cm = m * 100;
    mm = cm * 10;

    printf("\nDistance in meter %f", m);
    printf("\nDistance in centimeter %f", cm);
    printf("\nDistance in millimeter %f", mm);
}