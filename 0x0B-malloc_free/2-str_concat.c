#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *str;

	len1 = (s1 == NULL) ? 0 : strlen(s1);
	len2 = (s2 == NULL) ? 0 : strlen(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < len2; j++)
		{
			str[len1 + j] = s2[j];
		}
	}
	str[len1 + len2] = '\0';
	return (str);
}
