#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

int main (void)
{
  FILE * inFileHandle = NULL;
  FILE * outFileHandle = NULL;
  char inputFileName[FILENAME_MAX] = "WinterGrades.txt";
  char outputFileName[FILENAME_MAX] = "WinterGradesPlus.txt";
  char str[MAX] = "";
  char studentName[MAX] = "";
  char studentID[MAX] = "";
  double grades = 0.0;
  int returnValue = EXIT_SUCCESS;
  
  inFileHandle = fopen(inputFileName, "r");
  outFileHandle = fopen(outputFileName, "w");
  
  while (fscanf(inFileHandle, "%s", str) == 1);
  {
    fscanf(inFileHandle, "%s", studentName);
    fscanf(inFileHandle, "%s", studentID);
  }
  fprintf(outFileHandle, "%s", studentName);
  fprintf(outFileHandle, "%s", studentID);
  
  while (fscanf(inFileHandle, "%lf", &grades) == 1);
  {
    fscanf(inFileHandle, "%lf", &grades);
    if (grades < 3.0)
      grades += 1.0;
    else
      grades = 4.0;
    fprintf(outFileHandle, "%lf", grades);
  }
  
  fclose(inFileHandle);
  fclose(outFileHandle);
  puts("Press any key to continue. \n");
  getchar();
  return returnValue;
}
  
  