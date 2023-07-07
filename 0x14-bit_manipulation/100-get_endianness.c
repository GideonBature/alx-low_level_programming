#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: int
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr)
		return (1);
	else
		return (0);
}
