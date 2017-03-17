#include <stdio.h>
#define ROW 3
#define COL 5

void store(double arr[][COL]);
void display(double arr[][COL]);
void averageRow(double arr[][COL]);

int main(void)
{
 int i;
 int j;
 double arr1[ROW][COL];

 puts("Enter three sets of five double numbers");
 puts("to make a 3 X 5 array: ");
 
 // store the input
 store(arr1);
 // display the array
 puts("Original array:");
 display(arr1);
 // average of each row
 puts("Average of each row:");
 averageRow(arr1);
 puts("");
 
  
  return 0;
}

void store(double arr[][COL])
{
 int r;
 int c;
 for (r = 0; r < ROW; r++)
 {
  for (c = 0; c < COL; c++)
      scanf("%lf", &arr[r][c]);
 }
}
void display(double arr[][COL])
{
 int r;
 int c;
 for (r = 0; r < ROW; r++)
 {
  for (c = 0; c < COL; c++)
     printf("%.3lf\t", arr[r][c]);
   
  puts("");
 }
}
void averageRow(double arr[][COL])
{
  int r;
  int c;
  double sum;
  double* averageRow[COL];
  
  for (c = 0; c < COL; c++)
  {
    sum = 0;  // <--- crucial!
    for (r = 0; r < ROW; r++)
      sum += arr[r][c];
    
    printf("%.3lf\t", sum / ROW);
  }
}