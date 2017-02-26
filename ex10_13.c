#include <stdio.h>
#define ROW 3
#define COL 5

void store(int row, int col, double arr[row][col]);
void display(int row, int col, double arr[row][col]);

int main(void)
{
 int i;
 int j;
 double arr1[COL];
 double arr2[COL];
 double arr3[COL];
 puts("Enter three sets of five double numbers");
 puts("to make a 3 X 5 array: ");
 
 // store the input
 store(ROW, COL, arr1);
 // display the array
 display(ROW, COL, arr1);
 // average of each row
 averageRow(ROW, COL, arr1);
 
  
  return 0;
}

void store(int row, int col, double arr[row][col])
{
 int r;
 int c;
 for (r = 0; r < row; r++)
 {
  for (c = 0; c < col; c++)
      scanf("%lf", &arr[r][c]);
 }
}
void display(int row, int col, double arr[row][col])
{
 int r;
 int c;
 for (r = 0; r < row; r++)
 {
  for (c = 0; c < col; c++)
     printf("%.3lf ", arr[r][c]);
   
  puts("");
 }
}
void averageRow(int row, int col, double arr[row][col])
{
  int r;
  int c;
  double subtot = 0.0;
  for (r = 0; r < row; r++)
  {
    for (c = 0; c < col; c++)
      subtot += *(arr[c]);
    printf("%.3lf ", subtot);
  }
}