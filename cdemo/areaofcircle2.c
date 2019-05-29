#include <stdio.h>
#include <math.h>

float areaofcircle(float radius)
{
  float area;
  area= M_PI*radius*radius;
  return area;
}

int main(){
  char input[256];
  float r;
  printf("What is your circle's radius? \n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &r) ==1) break;
    printf("Please enter a valid radius: \n");
  }
  float area= areaofcircle(r);
  printf("The area of your circle is %f\n", area);
}
