#include <stdio.h>
int main(void)
{
  double dubArray[5] = {10.2, 0.07, 11.1, 223.1, 2.1}; // a sample array 
  int len = 5;
  int result = 0;
  int index = 0;
  
  // print the array
  printf("An array: ");
  for (index = 0; index < len; index++)
    printf("%.2lf ", dubArray[index]);
  
  // print the result of the function
  result = returnIndex(dubArray, len);
  printf("\nThe index of the largest value in the array: %d\n", result);
  printf("(The array index starts from 0.)\n");
  
  return 0;
}

// a function that returns the index of teh largest value stored in the 
// array of double
int returnIndex(double * ptr, int len)
{
  int theIndex = 0; // index for the largest value in the array
  int i = 0;
  int largest = 0;
  int val = 0;
  
  largest = *(ptr + 0);
  for (i = 0; i < len; i++)
  {
    val = *(ptr + i);
    if (largest < val)
    {
      largest = val;
      theIndex = i;
    }
  }
  
  return theIndex;
}
