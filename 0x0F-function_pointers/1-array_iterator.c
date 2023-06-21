#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * @array: The array
 * @size: array size
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
