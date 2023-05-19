#include <stdio.h>
/**
 * main - lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
