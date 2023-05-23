#include <stdio.h>
/**
 * main - adds even numbers of fibonacci series 1 and 2
 * Return: 0
 */
int main(void)
{
	long int i, num1 = 1, num2 = 2, num3 = 0, sum = 0;

	for (i = 0; i <= 30; i++)
	{
		if (num2 % 2 == 0 && num3 < 4000000)
		{
			sum += num2;
		}
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("%ld\n", sum);
	return (0);
}
