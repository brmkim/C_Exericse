#include <stdio.h>
int main(void)
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5]; 
  double target2[5];
  double target3[5];
  
  copyArr(target1, source, 5);
  copyPtr(target2, source, 5);
  copyPtrs(target3, source, source + 4);
			    // ?? double * param ?
  
  return 0;
}

void copyArr(double target[], double source[], int n)
{
  int i = 0;
  printf("copyArr = ");
  
  for (i = 0; i < n; i++)
  {
    target[i] = source[i];
    printf("%.1lf ", target[i]);
  }
  puts("");
}

void copyPtr(double * target, double * source, int n)
{
  int i = 0;
  printf("copyPtr = ");
  
  for (i = 0; i < n; i++)
  {
    *(target + i) = *(source + i);
    printf("%.1lf ", *(target + i));
  }
  puts("");
}

void copyPtrs(double * target, double * source, double * elem)
{
				  // where elem = (source + n)
  int n = 4;
  printf("copyPtrs = ");
  
  for (n = 4; n >= 0; n--)
  {
    *(target + n) = *(elem - n);
    printf("%.1lf ", *(target + n));
  }
  puts("");
}