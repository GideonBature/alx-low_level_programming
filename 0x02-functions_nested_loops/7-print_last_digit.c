#include "main.h"
/**
 * print_last_digit - prints last digit of any number
 * @num: parameter
 * Return: 0
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last *= -1;
		_putchar(last + '0');
		return (last);
	}
}
