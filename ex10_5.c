#include <stdio.h>
int main(void)
{
  double dubArray[5] = {100.2, 0.7, 11.1, 23.1, 0.111}; // a sample array 
  int len = 5;
  double result = 0.0;
  int index = 0;
  
  // print the array
  printf("An array: ");
  for (index = 0; index < len; index++)
    printf("%.3lf ", dubArray[index]);
   
  difference(dubArray, len);
  
  return 0;
}

void difference(double * ptr, int len)
{
  int i = 0;
  double largest = 0.0;
  double smallest = 0.0;
  double diff = 0.0;
  double val = 0.0;
  
  smallest = largest = *(ptr + 0);
  for (i = 0; i < len; i++)
  {
    val = *(ptr + i);
    if (largest < val)
      largest = val;
    else if (smallest > val)
      smallest = val;
  }
  
  diff = largest - smallest;
  printf("\nThe difference between the largest and the smallest\n");
  printf("element of the array of double is: %lf\n", diff);
  
}
