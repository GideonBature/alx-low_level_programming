#include "main.h"
/**
 * void _print_rev_recursion - prints string in reverse
 * @s: string parameter
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
