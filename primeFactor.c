#include <stdio.h>

    void main()
    {
    int i,n;
    
    printf("Enter a positive integern");
    scanf("%d",&n);
    if(n<=0)
      printf("Invalid numbern");  //to check if the number is positive
    else
    {
      i=2; //to check for every i starting from 2 if it is a prime factor of n
      while(n>1)
      {
        while(n%i==0)
        {
          printf("%d ",i);
          n=n/i; //divide n by the prime factor i obtained in each iteration
        }
        i++;
      }
    }
    
    }
