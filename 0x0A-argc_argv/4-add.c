#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i, num, sum = 0;
	
	for (i = 0; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = strtol(argv[i], NULL, 10);
			sum += num;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
