#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float numb = 0.0;
  printf("Please enter a floating-point number: ");
  scanf("%f", &numb);
  printf("a. The input is %.1f or %.1e \n", numb, numb);
  printf("b. The input if %+.3f or %.3E \n", numb, numb);
  
  return 0;
  
}
