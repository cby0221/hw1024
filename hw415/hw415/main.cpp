#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	float rate, money=5000.00;
	for (rate=10;rate <=12;rate+=0.5)
	{
		for (year = 1; year <= 15; year++)
		{
			money = (rate/100+1) * money;
			printf("年利率為%.1f % 第%d年的錢為%.2f\n", rate, year, money);
		}
		money = 5000;
		printf("\n");
	}
}