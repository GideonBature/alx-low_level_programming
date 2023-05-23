#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of any number
 * @num: parameter
 * Return: 0
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
	{
		last = ((-1 * num) % 10);
		_putchar(last + '0');
		return (last + '0');
	}
	else
	{
		last =  (num % 10);
		_putchar(last + '0');
		return (last + '0');
	}
}
