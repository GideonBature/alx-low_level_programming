#include "main.h"
/**
 * reverse_array - reverses content of arrays
 * @a: array pointer parameter
 * @n: Number of elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
