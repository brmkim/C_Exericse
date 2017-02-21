// copy multi-demensional array using variable-length arrays 
#include <stdio.h>

void copy(int row, int col, double origArr[row][col], double copyArr[row][col]);
void showArr(int row, int col, double arr[row][col]);

int main(void)
{
  int c = 3;
  int r = 5;
  double copyArr[c][r];
  double originalArr[3][5] =  // can't seem to decare array[c][r].
			      // "variable-sized object may not be initialized"
			      // Probably can't use VLA here, why?
  {
    {1.1, 2.2, 3.3, 4.4, 5.5},
    {6.6, 7.7, 8.8, 9.9, 0.0},
    {9.9, 8.8, 7.7, 6.6, 5.5}
  };
  showArr(c, r, originalArr);
  puts("");
  copy(c, r, originalArr, copyArr); // notice the third param is not "array[c][r]"
  showArr(c, r, copyArr);
  return 0;
}

void copy(int row, int col, double origArr[row][col], double copyArr[row][col])
{
  int r = row;
  int c = col;
  for (r = 0; r < row; r++)
    for (c = 0; c < col; c++)
      copyArr[r][c] = origArr[r][c];   //  r * c + c;  works too
}

void showArr(int row, int col, double arr[row][col])
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