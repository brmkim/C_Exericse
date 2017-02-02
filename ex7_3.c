#include <stdio.h>

int main(void)
{
	int input = 0;
	int countEven = 0;
	int countOdd = 0;
	int sumEven = 0;
	int sumOdd = 0;
	float averEven = 0.0f;
	float averOdd = 0.0f;
	char ch;

	puts("Enter a series of integers. Type 0 to finish: ");
	
	while ( scanf("%d", &input) == 1) 
	{
		if (input == 0)
			break;
		else
		{
			if ( input % 2 == 0)
			{
				sumEven += input;
				countEven++;
			}
			else // n % 2 is either 1 or -1. Better than else if (input == 1 || input % 2 != 0)
			{
				sumOdd += input;	
				countOdd++;
			}
		}
	}

	averEven = sumEven / (float)countEven;
	averOdd =  sumOdd / (float)countOdd;

	printf("Sum of even number entered is: %d \n", sumEven);
	printf("Sum of odd number entered is: %d \n", sumOdd);
	printf("Average value of even numbers is: %.2f \n", averEven);
	printf("Average value of odd numbers is: %.2f \n", averOdd);

	return 0;
}
