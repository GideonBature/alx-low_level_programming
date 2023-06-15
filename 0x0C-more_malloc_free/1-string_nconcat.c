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
	unsigned int i, j, len1;
	char *str;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
/*
 *	len2 = (s2 != NULL) ? strlen(s2) : 0;
 */

/*
 *	if (n >= len2)
 *	{
 *		len = len2;
 *	}
*/

	str = malloc(len1 + n + 1);

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
		for (j = 0; j < n; j++)
		{
			str[len1 + j] = s2[j];
		}
	}
	str[len1 + n] = '\0';
	return (str);
}
