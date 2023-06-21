#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
	{
		return (0);
	}
	return (-1);
}

