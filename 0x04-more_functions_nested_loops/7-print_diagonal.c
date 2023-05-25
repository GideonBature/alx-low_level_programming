#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else if (i > j)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
