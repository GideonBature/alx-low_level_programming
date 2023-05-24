#include <stdio.h>
/**
 * times_table - prints a 9 times multiplication table
 * Return: 0
 */
void times_table(void)
{
	int n1, n2, res;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			res = n1 * n2;

			printf("%2d", res);
			if (n2 != 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
