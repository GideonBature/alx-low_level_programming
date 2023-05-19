#include <stdio.h>
/**
 * main - prints all single digit of base 10
 * Return: 0
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
