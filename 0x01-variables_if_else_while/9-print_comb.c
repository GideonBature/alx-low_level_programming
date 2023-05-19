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

	fwrite("0", 1, 1, stdout);

	while (num <= '9')
	{
		putchar(comma);
		putchar(space);
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
