#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a squ matrix
 * @a: pointer to array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumd1 += a[i][j];
			}
			if (i + j == (size - 1))
			{
				sumd2 += a[i][j];
			}
		}
	}
	printf("%d, %d\n", sumd1, sumd2);
}
