#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: the parameter
 * Return: absolute value of an integer
*/

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
