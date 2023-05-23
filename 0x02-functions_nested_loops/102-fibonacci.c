#include <stdio.h>
/**
 * main - prints first 50 fibonnaci numbers
 * Return: 0
 */
int main(void)
{
	long int i, n1 = 0, n2 = 1, sum = 0;

	for (i = 0; i <= 50; i++)
	{
		sum = n1 + n2;

		n1 = n2;
		n2 = sum;

		printf("%ld", sum);
		if (i < 50)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
