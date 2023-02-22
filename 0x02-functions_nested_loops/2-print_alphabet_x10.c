#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
