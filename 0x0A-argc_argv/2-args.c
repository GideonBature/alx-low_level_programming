#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		char *name;

		name = argv[i];

		for (j = 0; name[j] != '\0'; j++)
		{
			_putchar(name[j]);
		}
		_putchar('\n');
	}
	return (0);
}
