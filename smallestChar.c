#include <stdio.h>
#define SIZE 5
char charMin (const char array[], int size);
int main(void)
{
  char ans = 'a';
  const char thatArray[] = {'t', 'i', 'n', 'y'};
  ans = charMin(thatArray, SIZE);
  printf ("%c", ans);
  return 0;
}
char charMin (const char array[], int size)
{
  char smallest = 'a';
  int i = 0;
  smallest = array[0];
  for (i = 1; i < size; i++)
  {
    if (smallest > array[i])
      smallest = array[i];
  }
  
  return smallest;
}
   
