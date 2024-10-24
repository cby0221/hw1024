#include<stdio.h>
#include<stdlib.h>

float totalsells, salary;

int main()
{
	while (1)
	{
		printf("Enter sells in dollars(-1 to end):");
		scanf_s("%f", &totalsells);

		if (totalsells == -1)
			break;
		salary = 200 + totalsells * 0.09;
		printf("Salary is: %.2f\n\n", salary);
	}
	return 0;
}