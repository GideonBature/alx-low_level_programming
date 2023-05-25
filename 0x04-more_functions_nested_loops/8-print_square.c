#include "main.h"
/**
 * print_square - function prints a square followed by a new line
 * @size: indicats how large the square should be
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	;
}
