#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to an integer
 * @s: string parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	result *= sign;

	return (result);
}
