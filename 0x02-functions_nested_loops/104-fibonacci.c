#include <stdio.h>
/**
 * main - prints first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int i, a = 1, b = 2, c;

	for (i = 0; i < 98; i++)
	{
		printf("%ld", a);

		c = a + b;
		a = b;
		b = c;

		if (i < 97)
		{
			printf(",");
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}

