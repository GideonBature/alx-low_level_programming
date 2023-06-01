#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string parameter
 * Return: 0
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = str[i] - 13;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
