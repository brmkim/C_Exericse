#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i = 0;
	int inputCount = 0;
	int space = 0;
	int alpha = 0;
	int digit = 0;
	char ch;
	char input[FILENAME_MAX] = "";
		
	puts("Enter any characters or numbers, and finish with # sign.");
 
	while ( (ch = getchar()) != '#')
	{
	
		if (isspace(ch))
			space++;
		if (isalpha(ch))
			alpha++;
		if (isdigit(ch))
			digit++;
		
	}
	putchar(ch);
	printf("You entered %d space characters,", space); 
	printf(" %d alphabet characters,", alpha);
        printf(" and %d number characters.\n", digit);

return 0;
}
