#include<stdio.h>

void main()
{
  float m, v, h, ke, pe, te;

  printf("Input Following: Mass, Velocity, Height\n");
  scanf("%f%f%f", &m, &v, &h);

  ke = (0.5) * m * v * v;
  pe = m * 9.8 * h;
  te = ke + pe;

  printf("\nKinetic Energy= %f J", ke);
  printf("\nPotential Energy= %f J", pe);
  printf("\nTotal Energy= %f J", te);
}
