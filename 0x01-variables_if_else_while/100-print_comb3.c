#include <stdio.h>
/**
 * main - prints all possible diff combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	fwrite("0", 1, 1, stdout);
	fwrite("1", 1, 1, stdout);

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '2'; j <= '9'; j++)
		{
			if ((i != j) && (i != (j + 1)) && (i != (j + 2)) && (i != (j + 3)))
			{
				if ((i != (j + 4)) && (i != (j + 5)) && (i != (j + 6)) && (i != (j + 7)))
				{
					putchar(',');
					putchar(' ');
					putchar(i);
					putchar(j);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
