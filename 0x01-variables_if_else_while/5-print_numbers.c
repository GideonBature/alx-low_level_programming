#include <stdio.h>
/**
 * main - prints all single digits in decimal
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
