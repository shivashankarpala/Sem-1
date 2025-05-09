#include<stdio.h>

void main()
{
  float m, v, h, ke, pe, te;

  printf("\nInput the Mass in kg : ");
  scanf("%f", &m);
  printf("\nInput the Velocity in m/s : ");
  scanf("%f",&v);
  printf("\nInput the Height in m : ");
  scanf("%f",&h);

  ke = (0.5) * m * v * v;
  pe = m * 9.8 * h;
  te = ke + pe;

  printf("\nKinetic Energy= %f J", ke);
  printf("\nPotential Energy= %f J", pe);
  printf("\nTotal Energy= %f J", te);
}
