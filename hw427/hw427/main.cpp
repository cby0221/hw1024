#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	printf("\t1\t2\t3\n");
	printf("----------------------------------\n");
	for (a = 1; a <= 500; a++)
	{
		for (b = a; b <= 500; b++)
		{
			for (c = b; c <= 500; c++)
			{
				if (c*c==a*a+b*b)
				{
					printf("\t%d\t%d\t%d\n", a, b, c);
				}
			}
		}
	}
}