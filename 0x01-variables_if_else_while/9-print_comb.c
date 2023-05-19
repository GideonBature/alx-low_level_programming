#include <stdio.h>
/**
 * main - prints all possible combinations of single-digits numbers
 * Return: 0
 */
int main(void)
{
	int num, comma, space;

	num = '1';
	comma = ',';
	space = ' ';

	write(1,"0",1);

	while (num <= '9')
	{
		putchar(comma);
		putchar(space);
		putchar(num);
		num++;
	}
	putchar('$');
	return (0);
}
