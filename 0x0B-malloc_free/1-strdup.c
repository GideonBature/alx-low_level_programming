#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc(strlen(str) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
