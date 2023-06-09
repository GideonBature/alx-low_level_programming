#include "main.h"
/**
 * main - prints programs name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *name;

	name = argv[0];

	for (i = 0; name[i] != '\0' && argc == 1; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
