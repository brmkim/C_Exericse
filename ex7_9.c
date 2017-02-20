// no while loop
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int i = 2;
  int n = 2;
  int input = 0;
  int output = 0;
  bool isPrime = false;
  printf("Please enter a positive integer: ");
  scanf("%d", &input);
  
  if (input <= 0 || input == 1 )
  {
    printf("Please enter a positive integer of which you'd find prime");
    printf("numbers: [2~)\n");
  }  
  else
  {
    if (input != i && input % i == 0)
      printf("The number entered is not a prime number.\n");
    else
    {  
      printf("The number entered is a PRIME NUMBER.\n");
      printf("The prime numbers smaller than or equal to the number are: \n");
      
      for (i = 2; i <= input; i++)
      {	
	for (n = 2, isPrime = true; (n * n) <= i; n++)
	if (i % n == 0)
	    isPrime = false;
	if (isPrime)
	    printf("%d\n", i);
	 
      }
     }
   } 
 
    
  return 0;
}
