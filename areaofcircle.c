#include <stdio.h>
#include <math.h>

float areaofCircleFunction(float radius)
{
  float area;
  area = M_PI * pow(radius,2);
  return area;
}

int main()
{
  for (float i = 3.5; i<=12.5; i++)
  {
    float area = areaofCircleFunction(i);
  printf("The area is %f\n", area);
  }
}
