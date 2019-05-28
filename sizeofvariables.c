#include<stdio.h>

int main()
{
  int a = 10;
  float b = 1.23;
  char c = 'x';
  double d = 123.456;
  unsigned int e = 7;
  signed int f = -10;

  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("float b value: %f and size: %d bytes\n", b, sizeof(b));
  printf("char c value: %c and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("signed int value: %d and size: %d bytes\n", f, sizeof(f));

  return 0; 
}
