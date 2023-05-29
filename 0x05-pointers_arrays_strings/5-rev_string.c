#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: string parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int count = 0, i = 0, n, j;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	n = count;

	for (i = 0, j = n - 1; j > i; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
