#include <stdio.h>
/**
 * main - prints all possible combinations of single-digits numbers
 * Return: 0
 */
int main(void)
{
	char num, comma, space;

	num = '1';
	comma = ',';
	space = ' ';

	putchar('0');

	while (num <= '9')
	{
		putchar(comma);
		putchar(space);
		putchar(num);
		num++;
	}
	return (0);
}
