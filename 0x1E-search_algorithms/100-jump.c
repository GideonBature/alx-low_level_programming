#include "search_algos.h"

/**
 * jump_search - uses jump search to search for values in sorted array
 * @array: pointer to array
 * @size: number of elements in array
 * @value: value searched for
 *
 * Return: value(success) or -1(failure)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, step = sqrt(size), end = step;

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	while (array[end] < value && end <= size)
	{

		start = end;
		end += step;

		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < end + 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		if (i >= size - 1)
			break;
	}
	return (-1);
}
