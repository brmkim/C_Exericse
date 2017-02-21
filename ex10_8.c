#include <stdio.h>
#define LEN 7
#define COPYLEN 3
int main(void)
{
  double anArray[LEN] = {2.2, 1.1, 4.4, 3.3, 5.5, 7.7, 6.6};
  double copy[COPYLEN];
  copyArr(copy, anArray + 2, COPYLEN); 
  showArr(copy, COPYLEN);
  return 0;
}
void copyArr(double target[], double source[], int n)
{
  int i = 0;
  printf("copyArr = ");
  
  for (i = 0; i < n; i++)
    target[i] = source[i];
}

void showArr(double array[], int n)
{
  int i;
  
  for (i = 0; i < n; i++)
    printf("%.1lf ", array[i]);
  puts("");
}
