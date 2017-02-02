#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char first[30] = "";
  
  
  printf("Please enter your first name: ");
  scanf("%s", first);
  
  printf("a. \"%s\" \n", first);
  printf("b. \"%20s\" \n", first);
  printf("c. \"%.20s\" \n", first);
  printf("d. \"%s\" \n", first);  // ??? 
  // d. printf it in a field three characters wider than the name?
  
  return 0;
  
}


  