#include <stdio.h>
#define ROW 3
#define COL 5

void doubling(int arr[][COL], int row);
void display(int arr[][COL], int row);

int main(void)
{
  int arr[][COL] =
  {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
  };
  
  doubling(arr, ROW);
  display(arr, ROW);
  
  return 0;
}
void doubling(int arr[][COL], int row)
{
  int i;
  int j;
  
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < COL; j++)
      *(*(arr + i) + j) = *(*(arr + i) + j) * 2; //arr[i][j] = arr[i][j] * 2;
  }
}
void display(int arr[][COL], int row)
{
  int i;
  int j;
  
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < COL; j++)
      printf("%d ", arr[i][j]);
  
    puts("");
  }
  
}