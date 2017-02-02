#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float height = 0.0;
  char name[30] = "";
  
  printf("Please enter your height in centimeters: ");
  scanf("%f", &height);
  printf("Please enter your first name: ");
  scanf("%s", name);
  
  height /= 100;
  printf("%s, you are %.2f meter tall. \n", name, height);
  
  return 0;
  
}
