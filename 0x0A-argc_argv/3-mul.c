#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int mul, num1, num2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%ld\n", mul);
	}
	return (1);
}
