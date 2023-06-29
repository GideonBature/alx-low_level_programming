#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - run computaions on standard output
 * @argc: argument count
 * @argv: argument vector
 * Return: result of calculation
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*get_op_func(char *s))(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
