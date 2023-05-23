#include "main.h"
#include <stdio.h>
/**
 * _abs - prints absolute value
 * Return: 0
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = (num * -1);
		printf("%d\n", num);
	}
	else if (num > 0)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
