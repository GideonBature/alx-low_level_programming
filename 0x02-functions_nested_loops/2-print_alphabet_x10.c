#include "main.h"
/**
 * print_alphbet_x10 - prints from a to z 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	ch = 'a';

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
