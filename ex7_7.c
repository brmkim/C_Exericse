// Write a program that requests the hours worked in a week and then prints
// the gross pay, the taxes, and the net pay. Assume the following:
// a. Basic pay rate = $10.00/hr
// b. Overtime (in excess of 40 hours) = time and a half
// c. Tax rate: 15% of the first $300
// 		20% of the next $150
// 		25% of the rest
// Use #define constants, and don't worry if the example does not conform to
// current tax law. 

#include <stdio.h>
#include <stdlib.h>

#define PAY 10.00
#define WORKHOURS 40
#define OVERTIMEPAY 15.00
#define TAXRATE1 0.15
#define TAXRATE2 0.2
#define TAXRATE3 0.25
#define CAP450 450
#define CAP300 300
#define CAP150 150

int main(void)
{
	double hours = 0.0;
	double grossPay = 0.0;
	double tax = 0.0;
	double netPay = 0.0;
	
	printf("Please enter the hours worked in a week: ");
	scanf("%lf", &hours);
	if (hours > WORKHOURS)
		grossPay = WORKHOURS * PAY + ((hours - WORKHOURS) * OVERTIMEPAY);
	else
		grossPay = hours * PAY;
	
	if (grossPay > CAP450)
	{
		tax = (TAXRATE3 * (grossPay - CAP450)) + (TAXRATE2 * CAP150) 
			+ (TAXRATE1 * CAP300);
	}
	else if (grossPay > CAP300)
		tax = (TAXRATE2 * CAP150) + (TAXRATE1 * CAP300);
	else
		tax = TAXRATE1 * CAP300;

	netPay = grossPay - tax;
	
	printf("Hours worked in a week: %.2lf \n", hours);
	printf("Gross Pay: $%.2lf \n", grossPay);
	printf("Tax Amount: $%.2lf \n", tax);
	printf("Netpay Amount: $%.2lf \n", netPay);



}

