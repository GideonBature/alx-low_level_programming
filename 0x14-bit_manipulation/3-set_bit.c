#include "main.h"
/**
 * set_bit - sets value of a bit to 1 @given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_bits, mask;

	n_bits = sizeof(unsigned long int) * 8;

	if (index >= n_bits)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
