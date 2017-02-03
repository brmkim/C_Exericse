#include <stdio.h>

int main(void){

	char ch;
	char exclPoint = '!';
	int dotCount = 0;
	int exclCount = 0;
	int count = 0;

	while ( (ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar(exclPoint);
			dotCount++;
		}		
		else if (ch == '!')
		{	
			putchar(exclPoint);
			putchar(exclPoint);
			exclCount++;
		}
		else
			putchar(ch);
	}
	
	printf(" - Number of '.' substituted to '!': %d \n", dotCount);
	printf(" - Number of '!' substituted to '!!': %d \n", exclCount);

	return 0;
}
