#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: parameter that takes digits
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
