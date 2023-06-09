#include "main.h"
/**
 * main - prints number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		_putchar(argc + '0' - 1);
	}
	_putchar('\n');

	return (0);
}
