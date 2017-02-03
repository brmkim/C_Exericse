#include <stdio.h>

int main(void){

	char ch;
	char exclPoint = '!';
	int dotCount = 0;
	int exclCount = 0;
	int count = 0;
	
	while ( (ch = getchar()) != '#')
	{ 

		switch (ch)
		{
			
			case '.':
			{
				putchar(exclPoint);
				dotCount++;
				break;
			}			
			case '!':
			{	
				putchar(exclPoint);
				putchar(exclPoint);
				exclCount++;
				break;
			default: putchar(ch);
			}
	
		}	
	}

	printf(" - Number of '.' substituted to '!': %d \n", dotCount);
	printf(" - Number of '!' substituted to '!!': %d \n", exclCount);

	return 0;
}
