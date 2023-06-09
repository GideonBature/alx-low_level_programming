#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	long int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		num1 = strtol(argv[1], NULL, 10);
		num2 = strtol(argv[2], NULL, 10);

		mul = num1 * num2;
		printf("%ld\n", mul);
	}
	return (0);
}
