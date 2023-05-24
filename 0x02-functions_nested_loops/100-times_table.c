#include <stdio.h>
/**
 * print_times_table - print any n-number of times table
 * @n: parameter of times table
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j != 0)
			{
				printf("%3d", res);
			}
			else
			{
				printf("%d", res);
			}

			if (j != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
