#include "main.h"
/**
 * print_binary - prints bin representation of num
 * @n: the number
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bit_flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	bit_flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			bit_flag = 1;
		}
		else if (bit_flag)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
