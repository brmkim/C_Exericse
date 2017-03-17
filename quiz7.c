//--------------------------------------------------------------------------------
//  Quiz 7
//
// BK
//--------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//#include <conio.h>  // GCC doesn't have this library (old MS-DOS lib)
#define ARRAY_SIZE 3
#pragma warning(disable: 4996)

struct words
{
	int numberOfWords;
	char theWords[ARRAY_SIZE][FILENAME_MAX];
};
typedef struct words Words;

char* alloCat(struct words * Words);

int main(void)
{
	
	Words myWords = { ARRAY_SIZE,  { "stuff", " and", " nonsense" } };
	char* fullString = NULL;

	fullString = alloCat(&myWords); //calls the function you write below
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
//----------------------------------------------------------------------------
// Header omitted
//----------------------------------------------------------------------------
char* alloCat(struct words *myWords)
{
 	char* ptr_newSpace;  // array (pointer) to hold myWords->theWords
	int i = 0;		  // index for the theWords[]
 	struct words * ptr_words; // pointer to the words struct
	ptr_words = myWords;	  // now the pointer holds the myWords struct 
	
	// allocate ample memory at first to an empty array
	ptr_newSpace = (char *)calloc(FILENAME_MAX, sizeof(char));
	
	// concatnate the words in the theWords array 
	for (i = 0; i < ARRAY_SIZE; i++)
	  strcat(ptr_newSpace, ptr_words->theWords[i]);
	
	// now reallocate just enough space for the concatenated string
	// and also check if enough memory is allocated
	if( (ptr_newSpace = (char *)realloc(ptr_newSpace, 
		      (strlen(ptr_newSpace) + 1) * sizeof(char))) == NULL)
	{
	    fprintf(stderr, "Could not reallocate memory\n");
	}
	
	return ptr_newSpace;
 }
