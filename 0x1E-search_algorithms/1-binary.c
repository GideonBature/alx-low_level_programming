#include "search_algos.h"

/**
 * binary_search - searches value using Binary Search Algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: value (success) or -1 (failure)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		print_array_elems(array, l, r);

		mid = (l + r) / 2;

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
		{
			r = mid - 1;
		}

		else
		{
			l = mid + 1;
		}

	}
	print_array_elems(array, l, r);
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
		putchar(array[i] + '0');

		if (i < right)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
