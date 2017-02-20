#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;
	int eExists = 0;
	int iExists = 0;

	while ( (ch = getchar()) != '#')
	{
		if (ch == 'e')
		{	
			eExists += 1;
			
			if (ch == 'i')while (ch == 'e')
			{
				if (ch == 'i')
					count++;
				else
					break;
			}	
		}	
		putchar(ch);

	}
	printf("Number of times 'ei' occurred: %d \n", count);
}
