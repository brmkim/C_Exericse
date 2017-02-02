#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char first[30] = "";
  char last[30] = "";
  int firstLen = 0;
  int lastLen = 0;
  
  printf("Enter your first name: ");
  scanf("%s", first);
  printf("Enter your last name: ");
  scanf("%s", last);
  
  printf("%s %s \n", first, last);
  firstLen = strlen(first);
  lastLen = strlen(last);
  printf("%d %d \n", firstLen, lastLen);
  
  return 0;

  
  
}
