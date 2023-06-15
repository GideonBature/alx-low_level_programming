#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: the smallest number
 * @max: the biggest number
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - (min - 1)) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	while (max >= min)
	{
		for (i = (max - min); i >= 0; i--)
		{
			arr[i] = max;
		}
		max--;
	}
	return (arr);
}
