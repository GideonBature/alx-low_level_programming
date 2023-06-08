#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * @i: base number = 2
 * Return: 0
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks prime through i recursively
 * @n: number to be checked
 * @i: base number = 2
 * Return: 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
