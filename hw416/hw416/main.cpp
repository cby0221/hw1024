#include <stdint.h>
#include <stdio.h>
int main()
{
	int i, j, k;
	char sign = '*';
	char sign2 = ' ';
	printf("(a)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= 11 - i; j--)
		{
			printf("%c", sign);
		}
		for (k = 0; k < 9; k++)
		{
			printf("%c", sign2);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n(b)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("%c", sign);
		}
		for (k = 10; k >= 11-i; k--)
		{
			printf("%c", sign2);
		}
		printf("\n");
	}
	printf("\n");
	printf("(c)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j > 11 - i; j--)
		{
			printf("%c", sign2);
		}
		for (k = 0; k <= 10-i ; k++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n(d)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 9; j >= i; j--)
		{
			printf("%c", sign2);
		}
		for (k = 10; k >= 11 - i; k--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
}