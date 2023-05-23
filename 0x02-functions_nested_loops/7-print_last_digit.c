#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of any number
 * @num: parameter
 * Return: 0
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		printf("%d", (-1 * num) % 10);
		return ((-1 * num) % 10);
	}
	else
	{
		printf("%d", num % 10);
		return (num % 10);
	}
}
