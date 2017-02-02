#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char first[30] = "";
  char last[30] = "";

  printf("Please enter your first name: ");
  scanf("%s", first);

  printf("Please enter your last name: ");
  scanf("%s", last);

  printf("Thank you, %s, %s. \n", last, first);

  return 0;
}
