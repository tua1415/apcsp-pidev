#include <stdio.h>

void arrayAdd();
void main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    {
    arr[i] = i*i;
    printf("%d\n", arr[i]);
    } 
    printf("\n");
    arrayAdd(arr,100,10);
}

void arrayAdd(int* arr, int s, int n)
{
  for(int num = 0; num < s; num++)
  {
    arr[num] = arr[num] + n;
    printf("%d\n", arr[num]);
  }
}
