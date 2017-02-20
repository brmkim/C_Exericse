// two-dimensional array pointer practice
#include <stdio.h>
int main(void)
{
  int i = 0;
  int j = 0;
  int * ptr;
  int line[4] = {1,2,3,4};
  int rec[3][4] = 
  {
    {1,2,3,4},
    {5,6,7,8},
    {9,0,1,2}
  };
  // printing the array
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      
      if ((j + 1) % 4 == 0)
	printf("%d \n", rec[i][j]);
      else
	printf("%d ", rec[i][j]);
      
    }
  }
  // pointer practice
  printf("*(*(rec + 0) + 0): %d\n", *(*(rec + 0) + 0));
  printf("*(*(rec + 1) + 1): %d\n", *(*(rec + 1) + 1));
  puts("");
  ptr = line;
  printf("ptr[0]: %d\n", ptr[0]);
  printf("ptr[3]: %d\n", ptr[3]);
  printf("*(ptr + 3): %d\n", *(ptr + 3));
  printf("ptr + 3: %p\n", ptr + 3);
  printf("line + 3: %p\n", line + 3);
  printf("&line + 3: %p\n", &line + 3);
  printf("&line: %p\n", &line);
  printf("ptr: %p\n", ptr);
  return 0;

}