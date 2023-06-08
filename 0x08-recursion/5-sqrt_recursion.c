#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose squareroot is to be calculated
 * @bn: base number
 * Return: 0
 */
int _sqrt_recursion_calculator(int n, int bn);
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_calculator(n, 1));
}

/**
 * _sqrt_recursion_calculator - contains the main logic
 * @n: number whose sqrt is to be calculated
 * @bn: base number
 * Return: 0
 */
int _sqrt_recursion_calculator(int n, int bn)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (bn * bn == n)
	{
		return (bn);
	}
	else if (bn * bn > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_calculator(n, bn + 1));
}

