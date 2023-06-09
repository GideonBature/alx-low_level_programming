#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
		{
			res = s1[i] - s2[i];
		}
	}
	return (res);
}
