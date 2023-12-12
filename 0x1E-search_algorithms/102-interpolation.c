#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: int(success) or -1(failure)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t l = 0, h = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		if (l == h)
		{
			if (array[l] == value)
				return ((int)l);
			return (-1);
		}

		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}

	return (-1);

}
