#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, length, breadth;
	printf("length is ");
	scanf_s("%d", &length);
	printf("breadth is ");
	scanf_s("%d", &breadth);
	for (i = 0; i <= length-1 ; i++)
	{
		for (j = 0; j <= breadth; j++)
		{
			if ((i == 0) || (i == length-1)||(j==0)||(j==breadth))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

}