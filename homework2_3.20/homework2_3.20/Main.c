#include<stdio.h>
#include<stdlib.h>

float worktimes, rate, salary = 0;

int main()
{
	while (1) {
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &worktimes);

		if (worktimes == -1)
			break;
		
		printf("Enter hourly rate for the worker ($00.00):");
		scanf_s("%f", &rate);

		if (worktimes > 40)
			salary = 40 * rate + (worktimes - 40) * 1.5*rate;
		else
			salary = worktimes * rate;
		
		printf("Salary is $%.2f\n\n", salary);

	}
	return 0;
}