#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j, len = 0, half, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	half = len / 2;
	n = (len % 2) / 2;

	if (len % 2 == 1)
	{
		for (j = n; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = half; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
