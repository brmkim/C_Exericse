// incomplete -- need to be fixed

#include <stdio.h>
#define LEN 5
#define ROW 2
void copyPtr(double * target, double * source, int n);
void showArray(double * ptr, int row, int len);

int main(void)
{
  int i, j = 0;
  double source[ROW][LEN] = 
  {
    {1.1, 2.2, 3.3, 4.4, 5.5},
    {2.1, 3.2, 4.3, 5.4, 6.5}
    
  };
  double copy[ROW][LEN];
  
  showArray(source, ROW, LEN);
  copyPtr(copy, source, LEN);
  showArray(copy, ROW, LEN);
  
  return 0;
}

void copyPtr(double target[], double source[], int n)
{
  int i = 0;
  
  for (i = 0; i < n; i++)
    *(target + i) = *(source + i);
    
}

void showArray(double array[], int row, int len)
{
  int i = 0;
  int j = 0;
  
  for(i = 0; i < row; i++)
  {
    for (j = 0; j < len; j++)
      printf("%.3lf ", i * j + j); // *(*(ptr + i) +j) won't work
      
    puts("");
  }
}