#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n:size of second string in bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	len1 = (s1 != NULL) ? strlen(s1) : 0;

	if (s2 != NULL)
	{
		len2 = (n >= strlen(s2)) ? strlen(s2) : n;
	}
	else
	{
		len2 = 0;
	}
	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if ((s1 != NULL) || (s2 != NULL))
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			str[len1 + j] = s2[j];
		}
	}
	str[len1 + len2] = '\0';
	return (str);
}
