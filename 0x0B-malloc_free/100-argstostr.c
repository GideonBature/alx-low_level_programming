#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates arguments
 * @ac: arguments count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, ltn = 0;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	arr = malloc((len + ac + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[ltn] = av[i][j];
			ltn++;
		}
		arr[ltn] = '\n';
		ltn++;
	}

	arr[ltn] = '\0';
	return (arr);
}
