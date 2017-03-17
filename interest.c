#include <stdio.h>
#include <math.h>
#define ARBITRARY 10
int main(void)
{
  double principal = 0.0;
  double payment = 0.0;
  long double interest = 0.0L;
  long double anArray[ARBITRARY];
  long double func = 0.0L;
  long double funcDerived = 0.0L;
  int months = 0;
  int i = 0;
  principal = 1000;
  payment = 88.85;
  months = 12;
  printf("Enter the amount of principal: %.2lf ",);
  //scanf("%lf", &principal);
  printf("Enter the amount of monthly payment: %.2lf ", );
  //scanf("%lf", &payment);
  printf("Enter the number of months to pay: %d", );
  //scanf("%d", &months);
  
  // Newton-raphson method: X[n+1] = X[n] - f(X[n])/f'(X[n])
  double initial = 0.0; 
  long double pVar = 0.0L;
  
  initial = payment * months / principal * 100;//payment / principal -1 / months; // initial guess for an interest rate
  pVar = pow( 1 + anArray[i], months) - 1;
  func = (principal * anArray[i]) + ((principal * anArray[i]) 
	 / pVar) - payment;
  funcDerived = ( principal / pVar) - 
  ((principal * months * anArray[i] * pow(anArray[i] + 1, months - 1)) 
  / pow(pVar, 2)) + principal;
  /*funcDerived = principal + (( powVar - 1) * principal 
	  - ( principal * interest * months * pow ((1 + interest), (months - 1))))
	  / pow (powVar - 1, 2);
  */
  anArray[0] = initial;
  for (i = 0; i < ARBITRARY; i++)
  {
    anArray[i+1] = anArray[i] - func / funcDerived;
    printf("Array %d: The interest rate is %.5Lf %\n", i, anArray[i]);
  }
    //interest = anArray[1];
  
  
  getchar();
  
  return 0;
}