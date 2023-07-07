#include "main.h"
/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 *
 * Return: %ud
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res != 0)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}
	return (count);
}
