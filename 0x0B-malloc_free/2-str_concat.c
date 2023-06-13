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
	int i, j;
	char *str;

	str = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[strlen(s1) + j] = s2[j];
	}
	str[strlen(s1) + j] = '\0';
	return (str);
}
