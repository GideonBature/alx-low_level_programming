#include "main.h"
/**
 * get_bit - fn returns value of a bit @given index
 * @n: the num
 * @index: the index
 *
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n_bits, mask, bit;

	n_bits = sizeof(unsigned long int) * 8;

	if (index >= n_bits)
		return (-1);

	mask = 1UL << index;
	bit = n & mask;

	if (bit)
		return (1);
	else
		return (0);
}
