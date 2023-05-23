#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minutes of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
	putchar('\n');
}
