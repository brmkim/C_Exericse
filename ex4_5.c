#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float downloadSpeed = 0.0;
  float fileSize = 0.0;
  float fileSizeInMb = 0.0;
  float downloadTime = 0.0;
  #define BITS_IN_BYTE 8
  #define BYTE_IN_MEGABYTE 1024000
  #define BITS_IN_MEGABIT 1000000
  // 1 megabit = 10^6 bits
  // 1 megabyte = 1024000 bytes = (1024000 * 8) bits 
 
  
  printf("Enter the download speed (in Mbs): ");
  scanf("%f", &downloadSpeed);
  printf("Enter the size of the file (in MB): ");
  scanf("%f", &fileSize);
  
  downloadTime = fileSize / downloadSpeed; 
  
  printf("At %.2f megabit per second,", downloadSpeed); 
  printf(" a file of %.2f megabytes", fileSize);
  
  fileSizeInMb = fileSize * BYTE_IN_MEGABYTE * BITS_IN_BYTE / BITS_IN_MEGABIT;
  downloadTime = fileSizeInMb * (1 / downloadSpeed); 
  printf(" downloads in %.2f seconds. \n", downloadTime);
  
  
  return 0;

  
}

  