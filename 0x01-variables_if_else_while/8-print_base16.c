#include <stdio.h>
/**
 * main - prints all numbers in base 16
 * Return: 0
 */
int main(void)
{
	int num, alp;

	num = '0';
	alp = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
