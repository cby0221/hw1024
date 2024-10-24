#include<stdio.h>
#include<stdlib.h>

float interest, principal, rate, days;

int main()
{
	while (1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;

		printf("Enter interest rate:");
		scanf_s("%f", &rate);

		printf("Enter term of  the loan in days:");
		scanf_s("%f", &days);

		interest = principal * rate * days / 365;
		printf("The interest charge is: $%.2f\n\n", interest);

	}
	return 0;
}