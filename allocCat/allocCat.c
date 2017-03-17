//--------------------------------------------------------------------------------
//  Quiz 7
//
// Your name goes here
//--------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#define ARRAY_SIZE 3
#pragma warning(disable: 4996)

struct words
{
	int numberOfWords;
	char theWords[ARRAY_SIZE][FILENAME_MAX];
};
typedef struct words Words;

// allocCat prototype (declaration) goes here:


int main(void)
{
	
	Words myWords = { ARRAY_SIZE, { "stuff", " and", " nonsense" } };
	char* fullString = NULL;

	fullString = allocCat(&myWords); //calls the function you write below
	if (fullString == NULL)
	{		 // get out if memory not allocated
		fprintf(stderr, "Could not allocate memory\n");
		return EXIT_FAILURE;
	}
	puts(fullString); 	// prints out the new string
	free(fullString);	// releases memory
	getchar();
	return EXIT_SUCCESS;
}


// allocCat definition goes here:
char* allocCat(const char* struct_ptr)
{
	const char * sa[ARRAY_SIZE] = {""};
 	if(*S1[strlen(S1) - 1] == '\n')   // remove carriage return if there 						
    	    *S1[strlen(S1) - 1] == '\0';
    	else
    	    while(getchar() != '\n'); 
    	   
	// get rid of the wasted space 
	*sa = (char *)realloc(sa, (strlen(sa) + 1) * sizeof(char));	
    	// now let's expand to allow a concatenation -- just enough space
    	if((*sa = (char *)realloc(sa, (strlen(sa) + 1) * sizeof(char))) == NULL)
    	{
        	fprintf(stderr, ERR_MSG);
        	return EXIT_FAILURE;
    	}

    	

    	return sa;
 }
