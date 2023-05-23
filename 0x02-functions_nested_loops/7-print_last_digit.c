#include "main.h"
/**
 * print_last_digit - prints last digit of any number
 * @num: parameter
 * Return: 0
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		return ((-1 * num) % 10);
	}
	else
	{
		return (num % 10);
	}
}
