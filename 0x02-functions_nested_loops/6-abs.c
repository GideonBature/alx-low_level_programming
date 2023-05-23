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
		num = -num;
		printf("%d", num);
	}
	else if (num > 0)
	{
		printf("%d", num);
	}	
}
