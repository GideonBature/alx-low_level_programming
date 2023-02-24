#include "main.h"
/**
 * _isdigit - checks for numbers from 0 to 9
 * @c: char to be checked
 * Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
