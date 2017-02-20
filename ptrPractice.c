// pointer practice
#include <stdio.h>
int main(void)
{
  int * intPtr;  // pointer to int array of 5 elements
  double * dubPtr; // pointer to double array of 3 elements
  char * strPtr; 
		// pointer to char array (string) of 5 elements (chars)
  
  int intVal[5] = {5,4,3,2,1};
  double dubVal[3] = {2.1,4.56,10.123456};
  char strVal[5] = {'H','e','l','l','o'};
  
  intPtr = intVal;
  dubPtr = dubVal;
  strPtr = strVal;
  printf("\nFYI, this system has int as %zd bytes; double as %zd bytes;\n",
	 sizeof(int), sizeof(double));
  printf(" and char as %zd bytes.\n", sizeof(char));
  printf("\nThe size of variables are--\n");
  printf("intPtr: %zd bytes, intVal: %zd bytes\n", 
	 sizeof(intPtr), sizeof(intVal));
  printf("dubPtr: %zd bytes, dubVal: %zd bytes\n", 
	 sizeof(dubPtr), sizeof(dubVal));
  printf("strPtr: %zd bytes, strVal: %zd bytes\n", 
	 sizeof(strPtr), sizeof(strVal));
  printf("\nAddresses-- intPtr: %p dubPtr: %p strPtr: %p\n", intPtr, dubPtr, strPtr);
  printf("\nintVal: %p dubVal: %p strVal: %p\n", intVal, dubVal, strVal);
  printf("\nValue of *(intVal + 2): %d\n", *(intPtr + 2));
  printf("	   &intVal[2]: %p\n", &intVal[2]);
  printf("	   &intVal[1]: %p\n", &intVal[1]);
  printf("	   &dubVal[1]: %p\n", &dubVal[1]);
  printf("	   &strVal[1]: %p\n", &strVal[1]);
  printf("\nPointer arithmatic--\n");
  printf("&dubVal + 0: %p\n", dubVal, dubVal);
  printf("&dubval + 3: %p\n", &dubVal + 3);
  printf("(&dubVal[3] is %p)\n", &dubVal[3]);
  printf("&dubVal[3] - &dubVal[0] = %x (bytes?)\n", &dubVal[3] - &dubVal[0]);
  printf("*(intVal + 0) = %d, same as intVal[0] -- %d\n", *intVal, intVal[0]); 
  printf("*(intVal + 6) = %d  <-- overflow\n", *(intVal + 6)); 
  
  return 0;
}
  
  
