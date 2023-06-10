#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print change
 * @n: parameter
 * Return: 0
 */
int check_change(int n);
int main(int argc, char *argv[])
{
	int n, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	res = check_change(n);

	printf("%d\n", res);

	return (0);
}
/**
 * check_change - check change
 * @n: parameter
 * Return: count
 */
int check_change(int n)
{
	int count = 0;

	while (n >= 25)
	{
		n -= 25;
		count++;
	}
	while (n >= 10)
	{
		n -= 10;
		count++;
	}
	while (n >= 5)
	{
		n -= 5;
		count++;
	}
	while (n >= 2)
	{
		n -= 2;
		count++;
	}
	while (n >= 1)
	{
		n -= 1;
		count++;
	}
	return (count);
}
