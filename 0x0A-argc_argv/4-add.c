#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= ':' && *argv[i] <= '}')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				num = atoi(argv[i]);
				sum += num;
			}
		}
		printf("%ld\n", sum);
	}
	return (0);
}
