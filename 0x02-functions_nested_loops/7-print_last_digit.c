#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the password argument
 * Return: the last digit
*/

int print_last_digit(int i)
{
	int x;
	int i;

	if (i < 0)
		i = -i;

	x = i % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
