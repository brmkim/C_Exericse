#include <stdio.h>
int main(void)
{
  int intArray[5] = {21, 344, 119, 521, 99}; //sample array of int
  int len = 5;
  int index = 0;
  int result = 0;
  result = returnLargestVal(intArray, len);
  
  // display the sample array
  printf("An array: ");
  for (index = 0; index < len; index++)
    printf("%d ", intArray[index]);
  
  // display the result of the function
  printf("\nThe largest value stored in the array of int is: %d\n", result);
  
  return 0;
}

int returnLargestVal(int * ptr, int len)
{
  int i = 0;
  int largest = 0;
  int val = 0;
  
  largest = *(ptr + 0);
  for (i = 0; i < len; i++)
  {
    val = *(ptr + i);
    if (largest < val)
      largest = val;
  }
  return largest;
}
