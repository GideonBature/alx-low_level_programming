#include "main.h"
#include <stdio.h>
/**
 * _abs - prints absolute value
 * @num: parameter that carries +ve and -ve numbers
 * Return: 0
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	else
	{
		return (num);
	}
}
