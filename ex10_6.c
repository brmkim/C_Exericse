#include <stdio.h>
int main(void)
{
  double dubArray[5] = {1.2, 24.7, 36.1, 87.0, 101.11}; // a sample array 
  int len = 5;
  double result = 0.0;
  int index = 0;
  
  // print the array
  printf("Original array: ");
  for (index = 0; index < len; index++)
    printf("%.3lf ", dubArray[index]);
  puts(""); 
  reverseArray(dubArray, len);
  
  return 0;
}

void reverseArray(double * ptr, int len)
{
  int i = 0;
  double revArray[5];
  
  for (i = 0; i < len; i++)
    *(revArray + i) = *(ptr + (len - 1 - i));
  
  printf("Reversed array: ");
  for (i = 0; i < len; i++)
    printf("%.3lf ", *(revArray + i));
  
  puts(""); 
}