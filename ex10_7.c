// incomplete -- need to be fixed

#include <stdio.h>
#define LEN 5
#define ROW 2
// to pass a 2D array, it needs to be: double (*array)[LEN)
// or double array[][LEN]
double* copyPtr(double (*target)[LEN], double (*source)[LEN]);
void showArray(double (*array)[LEN]);

int main(void)
{
  double source[ROW][LEN] = 
  {
    {1.1, 2.2, 3.3, 4.4, 5.5},
    {2.1, 3.2, 4.3, 5.4, 6.5}
    
  };
  double copy[ROW][LEN];
  puts("Original array:");
  showArray(source);
  copyPtr(copy, source);
  puts("Copied array:"); 
  showArray(copy);
  
  return 0;
}

double* copyPtr(double (*target)[LEN], double (*source)[LEN])
{
  int i = 0;
  int j = 0;
  
  for (i = 0; i < ROW; i++)
    for (j = 0; j < LEN; j++)
      *(*(target + i) + j) = *(*(source + i)+ j);
    
  return *target;  
}

void showArray(double (*array)[LEN])
{
  int i = 0;
  int j = 0;
  
  for(i = 0; i < ROW; i++)
  {
    for (j = 0; j < LEN; j++)
      printf("%.3lf ", (*(*array + i) +j)); // (==) array[i][j]
      
    puts("");
  }
}