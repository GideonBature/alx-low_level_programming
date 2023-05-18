#include <stdio.h>
/**
 * main - prints some text
 * Return: 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\"", 1, 31, stdout);
	fwrite(" - Dora Korpar, 2015-10-19\n", 1, 28, stdout);

	return (1);
}
