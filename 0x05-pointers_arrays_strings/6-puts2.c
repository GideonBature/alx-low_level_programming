#include "main.h"
/**
 * puts2 - prints everyother character starting with the first character
 * @str: string parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] < '\0'; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i+1]);
		}
	}
	_putchar('\n');
}
