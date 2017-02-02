#include <stdio.h>
#include <ctype.h>


// this program takes in the enter execution (but it shouldn't)
int main(void)
{
	char characters[FILENAME_MAX] = "";
	char ch;
	int count = 0;
	int i = 0;
	puts("Enter characters and type # to finish.");
	while ((ch = getchar()) != '#')
	{
		if (isalnum)
			count++;	
		if (count % 8 == 0)
			printf("\n");
		
		putchar(ch);
		printf(" ASCII decimal code: %d \n", ch);
			
	}

		printf("Number of characters entered: %d \n", count);



	return 0;
}
