#include "main.h"
/**
 * print_last_digit - prints last digit of any number
 * @num: parameter
 * Return: 0
 */
int print_last_digit(int num)
{
	if (num > 0)
	{
		num = num;
	}
	else
	{
		num = (num * -1);
	}
	_putchar((num % 10) + '0');
	return ((num % 10));
}
