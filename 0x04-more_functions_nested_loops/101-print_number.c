#include "main.h"
/**
 * print_number - prints numbers using the _putchar() function
 * @n: parameter
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10000 && n <= 99999)
	{
		_putchar((n / 10000) + '0');
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
