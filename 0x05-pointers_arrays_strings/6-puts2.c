#include "main.h"
/**
 * puts2 - prints everyother character starting with the first character
 * @str: string parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	if (str[0] != 'H')
	{
		for (i = 0; (str[i] != '\0') && (str[i] != 'H'); i+=2)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i+=2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
