#include "search_algos.h"

/**
 * binary_search_0 - searches value using Binary Search Algorithm
 * @array: pointer to first element of the array
 * @low: left index
 * @high: the right index
 * @value: value searched for
 *
 * Return: value (success) or -1 (failure)
 */
int binary_search_0(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array_elems(array, low, high);

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
		{
			high = mid - 1;
		}

		else
		{
			low = mid + 1;
		}
	}
	/* print_array_elems(array, l, r); */
	return (-1);
}

/**
 * print_array_elems - print the elements of an array
 * @array: pointer to the array
 * @left: initial index
 * @right: final index
 *
 * Return: void
 */

void print_array_elems(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i < right + 1; i++)
	{
		printf("%d", array[i]);

		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * exponential_search - strengthens binary search
 * @array: pointer to array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: int(success) or -1(failure)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size - 1) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binary_search_0(array, low, high, value));
}
