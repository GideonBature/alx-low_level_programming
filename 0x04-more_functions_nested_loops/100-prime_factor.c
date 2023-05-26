#include "main.h"
#include <stdio.h>
/**
 * main - print the largest prime factor
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	int prime, largest_prime;

	for (prime = 2; num > 1; prime++)
	{
		while (num % prime == 0)
		{
			num = num / prime;
		}
	}
	largest_prime = (prime - 1);
	printf("%d\n", largest_prime);

	return (0);
}

