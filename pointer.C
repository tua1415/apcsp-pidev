#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d = 5;
  int e = 7;
  printf("The value of d is %d and the address of d is %d\n", d, &d);
  printf("The value of e is %d and the address of e is %d\n", e, &e);

  int* ptrtod = &d;

  e = *ptrtod;
  *ptrtod = 7;
  printf("the value of d is now %d\n", d);
  printf("the value of e is now %d\n", e);
}
