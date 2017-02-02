#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  #define GALLON_TO_LITER 3.785
  #define MILE_TO_KM 1.609
  long miles = 0L;
  long gallon = 0L;
  long double milesPerGallon = 0.0f;
  long double kmPerLiter = 0.0f;
  
  printf("Enter the number of miles traveled: ");
  scanf("%ld", &miles);
  printf("Enter the number of gallons of gasoline consumed: ");
  scanf("%ld", &gallon);
  
  milesPerGallon = miles / gallon;
  printf("The fuel economy is %.2Lf miles per gallon or\n", milesPerGallon);
  
  kmPerLiter = miles * MILE_TO_KM / gallon * GALLON_TO_LITER;
  printf("%.2Lf kilometers per liter. \n", kmPerLiter);
  
  
  
  
  return 0;
 
}