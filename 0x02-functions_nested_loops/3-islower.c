#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Return: 1 or 0
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
