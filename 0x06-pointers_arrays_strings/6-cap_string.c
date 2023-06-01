#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string parameter
 * Return: 0
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i];
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' '
		|| str[i - 1] == '\n' || str[i - 1] == '\t' ||
		str[i - 1] == '.' || str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}'))
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
