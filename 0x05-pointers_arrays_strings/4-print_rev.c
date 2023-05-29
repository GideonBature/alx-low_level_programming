#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int count = 0, i = 0, n, j;

	while(s[i] != '\0')
	{
		count++;
		i++;
	}

	n = count;

	for (i = 0, j = n - 1; j + n > i; i++, j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
