// Didn't do an input sanitization
#include <stdio.h>
#define PAYRATE1 8.75
#define PAYRATE2 9.33
#define PAYRATE3 10.00
#define PAYRATE4 11.20
#define WORKHOUR 40
#define OVERTIME 1.5
#define CAP300 300
#define CAP150 150
#define TAXRATE1 0.15
#define TAXRATE2 0.20
#define TAXRATE3 0.25


int main(void)
{
    char choice;
    double hours = 0.0;
    double gross = 0.0;
    double tax = 0.0;
    double net = 0.0;
	
    do
    {
	puts("********************************************************");
	printf("Enter the number corresponding to the desired pay rate ");
	printf("or action: \n");
	printf("1) $8.75/hr                         2) $9.33/hr\n");
	printf("3) $10.00/hr	    		    4) $11.20/hr\n");
	printf("5) Quit\n");
	puts("********************************************************");
	choice = getchar();
	
	if ( choice == '1' || choice == '2' || choice == '3' || choice == '4')
	{
	  printf("Please enter the number of hours worked in a week: ");
	  scanf("%lf", &hours);
	  switch(choice)
	  {
	    case '1': if (hours <= WORKHOUR)
		      gross = PAYRATE1 * hours;
		    else
	    	      gross = ((hours - WORKHOUR) * PAYRATE1 * OVERTIME) + (PAYRATE1 * hours); 
		    break;
	    case '2': if (hours <= WORKHOUR)
		      gross = PAYRATE2 * hours;
		    else
		      gross = ((hours - WORKHOUR) * PAYRATE2 * OVERTIME) + (PAYRATE1 * hours); 
		    break;			
	    case '3': if (hours <= WORKHOUR)
		      gross = PAYRATE3 * hours;
		    else
		      gross = ((hours - WORKHOUR) * PAYRATE3 * OVERTIME) + (PAYRATE3 * hours); 		
		    break;		
	    case '4': if (hours <= WORKHOUR)
		      gross = PAYRATE4 * hours;
		    else
		      gross = ((hours - WORKHOUR) * PAYRATE4 * OVERTIME) + (PAYRATE4 * hours); 
		    break;	
	   }	
		
		if (gross > CAP300 + CAP150)
		  tax = TAXRATE3 * (gross - CAP300 - CAP150) + TAXRATE2 * CAP150 + TAXRATE1 * CAP300;
		else if (gross > CAP300)
		  tax = TAXRATE2 * CAP150 + TAXRATE1 * CAP300;
		else
		  tax = TAXRATE1 * gross;
		
		net = gross - tax;
		puts("");
		printf("Gross Pay: $%.2lf Taxes: $%.2lf Net Pay: $%.2lf \n\n", gross, tax, net);		
		puts("Press any key to continue.");
		getchar();
	  }
	else if (choice < '1' || choice > '5')
	  puts("Please choose within the appropriate range! [1-5]\n");	  
	  getchar();
	  
    } while ( choice != '5');
	
	puts("Good Bye\n");
	return 0;	
}
