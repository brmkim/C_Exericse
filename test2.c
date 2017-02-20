#include <stdio.h>

int main (void)
{
  int x = 3;
  for (x = 5; x; x--)
    printf("%d", x);

  return 0;
}